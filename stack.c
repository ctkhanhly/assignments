//stack
//last in first out
//push(): add things into stack
//pop(): get rid of the last one in the stack/top one
//isEmpty() : pop() things-> check until it's empty- T/F
//isFull(): stack is fixed size - T/F
//peek or top: return last item of the stack/ top one.
//e.g implementation: check curly brackets(stack of curly brackets), algorithms

#include <stdio.h>

int MAX_SIZE = 8;
int stack[8];
int top = -1;//location of top element

int isEmpty(){
	if(top == -1){
	return 1;
	}
	else{
	return 0;
	}
}

int isFull(){
	if(top==MAX_SIZE){
	return 1;
	}
	else{
	return 0;
	}
}

int pop(){
	int data;

	if(!isEmpty()){
	data = stack[top];//does not throw away, just top variable changes
	top = top -1;
	return data;
	}
	else{
		printf("Stack is empty.\n");
	}
}

int push(int data){
	if(!isFull()){
		top = top +1;
		stack[top] = data;
	}
	else{
		printf("Stack is full.\n");
	}
}

int peek(){
	return stack[top];
}

int main(){
	push(3);
	push(2);
	push(6);
	push(10);
	push(1);


	printf("top of the stack is %d\n", peek());
	printf("Stack: \n");


	while(!isEmpty()){
	int data  = pop();
	printf("%d\n", data);
	}

	if(isFull()){
		printf("Stack is full.\n");
	}
	
	if(isEmpty()){
		printf("Stack is empty.\n");
	}
	
	return 0;
}

