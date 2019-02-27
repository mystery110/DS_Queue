-deque is a one dimension array with the capacity to store 100 element

-The reason to set the array to be so huge is because the maximum number of intruction won't exceed 50 . If TA push_back 50 times or push_front 50 time ,the progrom won't have any error . 

-The initial value for the front index is set to 49 while read index is 50.Therefor , push_front can execute 50 times so as push_back .The reason why didn't set the initial value to 0 (start from 0)is to reduce the computation required to change front index and shift the element to the right everytime we execute push_front.

-The index of the available space in the front end is store in frontIndex ,the rear end in rearIndex;

-In order for the user to use the function they wanted , map fucntion is used.The function push_back and push_front required one integer as argument while the other functions didn't.Therefore , two function pointer is declare .one is funcName for push_back and push_front and the other is funcNameXInt is for the others.

-Map each string to its coresponding function .Example "push_back" to function "push_back.

-The input of the user is stored in the variable input . In order to split the string into function name and integer(if required),istringstream is used.

-The result after spliting it is stored in the variable result.

-result[0] is the function while result[1] is the parameter .When result is declare , result[0]="" while result[1]="kkk". This to determine whether the function chosen by the user required an argument or not . If the function does not required any argument , result[1] will be "kkk" .

-Function push_front store the integer entered by user into the array deque at index frontIndex .frontIndex is then --.Same theory is applied to push_back.If frontIndex==-1,means there is no available space in the front end anymore(this will not happen because the maximum number of instruction wont exceed 50),the function will print error message . Same thing happen when rearIndex==100.

-Function pop_front increase frontIndex by 1 while pop_back decrease rearIndex by 1.If frontIndex+1==rearIndex , the queue is empty and the function will show some error message .

-Function show will print out every element starting from frontIndex to rearIndex.
