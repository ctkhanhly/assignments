//queue
//first in first out
//enqueue(): add things to the queue
//dequeue(): dequeue the element that goes 1st
//isFull()
//isEmpty()
//front() : front of queue, 1st one to be dequeued
//rear(): back of queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 6 //define constant variable

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek(){
	return intArray[front];
}

int isEmpty(){
	if(itemCount ==0){
	 return 1;
	}
	else{
	return 0;
	}
}

int isFull(){
	if(itemCount == MAX){
		return 1;
	}
	else{
	return 0;
	}
}

int size(){
	return itemCount;
}

void enqueue(int data){
	if(!isFull()){
		if(rear==MAX){
		rear = -1;
		}
	
	
	intArray[++rear] = data;
	itemCount++;
	}
}

int dequeue(){
	int data = intArray[front++];

	if(front ==MAX){
	 front = 0;
	}
	
	itemCount --;
	return data;
}

int main(){
	enqueue(3);
	enqueue(4);
	enqueue(14);
	enqueue(1);
	
	int number = dequeue();
	printf("Removed: %d\n", number);

	int another_number = peek();
	printf("Front is : %d\n", another_number);

	while(!isEmpty()){
	int n= dequeue();	
	printf("Front is: %d\n", another_number);
	}

	return 0;
}


