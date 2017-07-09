#include <stdio.h>
int main(int argc, char* argv[]){
	/*
	int *z;
	int m =10;
	//&m = 0x7ffe97a39854;
	z = &m;
	
	//&n = 0x7ffe97a39858;
	printf("Address of m: %p \n", z);
	printf("Value of m: %d \n", *z);
//2
	int n = 29;
 	int *ab;
	ab = &n;
	printf("Address of pointer ab: %p", ab);
	printf("Content of pointer ab: %d", *ab);
	*ab = 7;
	
	printf("Address of pointer ab now: %p", ab);
	printf("Value of n is now: %d", n); 
//3
	int m = 300;
	char cht = 'z';
	double fx = 300.600006;
	
	int *mPtr = &m;
	char *chtPtr = &cht;
	double *fxPtr = &fx;

	printf("Address of m is : %p \n", &m);
	printf("Address of fx is : %p \n", &fx);
	printf("Address of cht is : %p \n", &cht);

	printf("Value at address of m %p is: %d \n", &m, m);
	printf("Value at adress of fx %p is: %lf \n", &fx, fx);
	printf("Value at address of cht %p is: %c \n", &cht, cht);

	printf("address of m is: %p \n", mPtr);
	printf("address of fx is: %p\n", fxPtr);
	printf("address of cht is: %p\n", chtPtr);

//only pointer operator
	printf("value at address of m is: %d\n", *mPtr);
	printf("value at address of fx is: %lf\n", *fxPtr);
	printf("value at address of cht is: %c\n", *chtPtr);*/
//4: add 2 numbers using pointers - argv[1] argv[2]
	//pointers can be reassigned while references cant
	int *sumPtr; 
	int sum = atoi(argv[1]) + atoi(argv[2]);
	sumPtr = &sum;
	printf("The sum of two numbers using pointer is: %d\n", *sumPtr);
//5: add numbers using call by reference *****
	int *first;
	int *second;
	int firstn0 = atoi(argv[1]);
	int secondn0 = atoi(argv[2]);

	printf("#5: the sum of 2 numbers using call by reference is: %d \n", firstn0 + secondn0);
//#6: max between 2 using a pointer
	first = &firstn0;
	second = &secondn0;

	if(*first > *second){
		printf("The max between the two is: %d\n", *first);
	}
	else{ printf("The max between the two is: %d\n", *second);}
//7 store elements in an array and print elements using pointers
	int array[] = { 1,2,3,4,5,6,7,8};
	printf("Array displayed by pointers is: ");
	int *arrayPtr = array;
	for(int i =0; i< sizeof(array)/sizeof(int); i++){
		printf("%d ", *(arrayPtr+i));
	}
	printf("\n");


	
	
	return 0;
}
