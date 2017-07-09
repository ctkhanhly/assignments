#include <stdio.h>
int main(int argc, char*argv[]){
	char haha1[10] = {'h', 'a', 'h', 'a', '4','5','6','7','8','1' };
//should not be ok
	char haha[10] = {'h', 'a', 'h', 'a','\0'};//terminator: zero not o
	//char haha[10] = {'h', 'a', 'h', 'a'};
	//haha[9] = '1';//does not print this? whether there is '\0' after 'a'-3
	printf("String length is: %ld\n", sizeof(haha)/sizeof(char));
	printf("%c\n", haha[4]);//not add '\o' automatically
	printf("%s\n",haha);
	char str[11] = {};
	printf("%c\n", str[0]);
//pointer check
	int factory  = 10;
	//int *factoryPtr = &factory;
	int *factoryPtr;
	factoryPtr = &factory;
	printf("%d\n", *factoryPtr);//10, already has that value

//void pointer
void *aPtr = {0};//void is not a type-> aPtr can have any type

int a = 44;
char b = 'f';
int array[40] = {0};

aPtr = &a;//assign value, even after this, *aPtr still a void, 
//dont know what type to point to
//(int*) aPtr: cast my pointer into an int pointer
//*aPtr: deference aPtr
aPtr = &b;
aPtr = array1;

//deference void pointer- c has to understand what type it's pointing to
//array is a continuous block of memory,
//next 4 bytes - address- int array
//free() only works for dymanically allocated - made by malloc, expects a memory address
//pointer arithmetic 

int array1[5] = {1,2,3,4,5};
int *aPtr = &array1[0];

size_t i;
for(i =0; i<5; i++){
	printf("The memory adress %p -- value %d\n", aPtr, *aPtr);
	aPtr++;
}
	return 0;
}
