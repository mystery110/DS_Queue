#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

void push_front(int);
void push_back(int);
void pop_front();
void pop_back();
void show();
int deque[100];
int frontIndex=49,rearIndex=50;
typedef void (*funcName)(int);
typedef void (*funcNameXint)();

int main (){
	map<string,funcName>mapName;
	map<string,funcNameXint>mapNameXInt;
	mapName["push_back"]=push_back;
	mapName["push_front"]=push_front;
	mapNameXInt["pop_back"]=pop_back;
	mapNameXInt["pop_front"]=pop_front;
	mapNameXInt["show"]=show;
	const char splitChar=' ';
	int parameter;
	while(true){
		string input;	
		getline(cin,input);
		string result[2]={"","kkk"};
		istringstream split(input);
		getline(split,result[0],splitChar);
		getline(split,result[1],splitChar);
		if(result[1]=="kkk"){
			mapNameXInt[result[0]]();
		}
		else {
			parameter=stoi(result[1],nullptr,10);
			mapName[result[0]](parameter);
		}
	}
}

void push_front(int x){
	if(frontIndex!=-1){
		deque[frontIndex--]=x;}
	else 
		cout<<"The Queue is full"<<endl;
}

void push_back(int x){
	if(rearIndex!=100){
		deque[rearIndex++]=x;}
	else
		cout<<"The Queue is full"<<endl;
}

void pop_front(){
	if(frontIndex+1==rearIndex){
		cout<<"The Queue is empty"<<endl;
	}
	else{
		frontIndex++;}
}

void pop_back(){
	if(rearIndex-1==frontIndex){
		cout<<"The queue is empty"<<endl;}
	else{
		rearIndex--;}
}

void show(){
	if(rearIndex-1==frontIndex){
		cout<<"The queue is empty"<<endl;}
	else {
		for(int i=frontIndex+1;i<rearIndex;i++){
			cout<<deque[i]<<" ";
		}
		cout<<endl;}
}

	




	
	

