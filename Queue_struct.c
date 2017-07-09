#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//#define MAX 6 



struct Queue { 
//a queue has to store 4 ints, 1 array int
	int max;	
	int *intArray;
	int front;
	int rear ;
	int itemCount;
};

struct Queue *Queue_create(int max){
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));//the kind of address expected is struct*, as much memory as a queue
//return value from malloc = actual memory address in the heap
	assert( q != NULL);

	q->max = max;
	q->front = 0;
	q-> rear  =-1;
	q->itemCount = 0;
	q->intArray = (int *)malloc(sizeof(int)*max);

	return q;
}

void Queue_destroy( struct Queue *q)
{
	assert(q != NULL);

	free(q);
	free(q->intArray);
}

void Queue_print (struct Queue *q)
{
	printf("Front: %d\n", q->front);
	printf("Rear: %d\n", q->rear);
	printf("MAX: %d\n", q->max);
	printf("ItemCount: %d\n", q->itemCount);
}
int peek(struct Queue *q){
	return q->intArray[q->front];
}

int isEmpty(struct Queue *q){
	if(q->itemCount ==0){
	 return 1;
	}
	else{
	return 0;
	}
}

int isFull(struct Queue *q){
	if(q->itemCount == q->max){
		return 1;
	}
	else{
	return 0;
	}
}

int size(struct Queue *q){
	return q->itemCount;
}

void enqueue(struct Queue *q,int data){
	if(!isFull(q)){
		if(q->rear== q->max){
		q->rear = -1;
		}
	
	
	q->intArray[++q->rear] = data;
	q->itemCount++;
	}
}

int dequeue(struct Queue *q){
	int data = q->intArray[q->front++];

	if(q->front == q->max){
	 q->front = 0;
	}
	
	q->itemCount --;
	return data;
}
int main(){
	
	struct Queue *q1 = Queue_create(5);	
	
	enqueue(q1,3);
	enqueue(q1,4);
	enqueue(q1,14);
	enqueue(q1,1);
	
	int number = dequeue(q1);
	printf("Removed: %d\n", number);

	int another_number = peek(q1);
	printf("Front is : %d\n", another_number);

	while(!isEmpty(q1)){
	int n= dequeue(q1);	
	printf("Front is: %d\n", another_number);
	}

	printf("Q1: %p\n", q1);
	Queue_print(q1);

	return 0;
}


