#include <stdio.h>
//n.melissaris@columbia.edu
//nm3017@
//8: recursion
void swap(int *a, int *b){//void - core dumb - why?
	int temp = *a;
	//temp = a;
	*a = *b;
	*b = temp;
}
int* max(int*a, int*b){
	if(*a>*b){
	return a;}
	else{ return b;}
}

//5 add using reference
int add(int *a, int *b){
	return *a+*b;
}
int main(int argc, char* argv[]){
	char str[20];
	printf("Enter a string: ");
	scanf("%s", str);
	printf("\n");

//10: length of the string
	int Slength;

	for(int i =0; i <sizeof(str)/sizeof(char);i++){
		if(str[i]=='\0'){
			break;}
		Slength++;
	}

	//printf("String length is: %ld\n", sizeof(str)/sizeof(char));}
	printf("String length is: %d", Slength);
//11: swap

	int first = atoi(argv[1]);
	int second = atoi(argv[2]);
	//int *firstPtr ;
	//int *secondPtr ;
	//firstPtr = &first;
	//secondPtr = &second;
	//*firstPtr = first;
	//*secondPtr = second;
	swap(&first,&second);//*********
//why *firstPtr and *secondPtr dont work?
	printf(" %d, %d\n", first, second); 
	//printf("Size of *firstPtr: %ld\n", sizeof(firstPtr));//8
	//printf("Size of long %ld double %
//int *p = &b;== int *p; p =&b;

//5: add using reference
	printf("Sum of 2 numbers is: %d\n", add(&first, &second));

	
//12: factorial
	int factorial=1;
	int *factorialPtr = &factorial;
	for(int i = atoi(argv[1]); i>0; i--){
		factorial*= i;
	}
	printf("Factorial of the number is: %d\n", *factorialPtr);
//13: counts of vowels and consonants
	//char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 	'k', 'l', 'm', 'n', 'o', 'p','q', 'r', 's', 't','u', 'v', 'w','x','y','z', 'o'};
	//a,e,i,o,u
	int vowels[5] = {97, 101,105,111,117};
	int cvFreq[2] = {0};//1: vowel, 2: consonant
	
	for(int i = 0; i<Slength; i++){
		for(int m = 0; m< 5; m++){
		if((int)str[i] == vowels[m]){
			cvFreq[0] ++;}
		}
	}
	cvFreq[1] = Slength - cvFreq[0];
//8: permunations of a word
	int perLength =1;
	char *per[Slength*(Slength+1)/2+1];
	printf("Permutations of the word are: ");
	int k;
	/*for( perLength =1; perLength<= Slength; perLength++){
		//char per[Slength*(Slength+1)/2];
		for(int m=0; m+perLength < Slength; m++){
			for(int h =0 ; h< perLength; h++){
				per[k][h] = str[h+m];
			}
			printf("%s ", per[k]);
			k++;
		}
		
	}*/
	printf("\n");
//13: max of 2 function returning pointer
	printf(" Address of the first %p, the second %p\n", &first, &second);
	max(&first, &second);
	printf("Address of the max %p\n", max(&first, &second));
	//printf("Address of the max %d", *max(&first, &second));
//16: sum of all elements in aray using pointer
	int array [10]= { 5,6,1,2,3,10, 5,20,1,1};
	int *arrayPtr = array;
	int sum =0;
	int* sumPtr = &sum;
 	printf("The array is : ");
	for(int i = 0; i<10; i++){
		*sumPtr+= arrayPtr[i];
		printf("%d ", arrayPtr[i]);//or*(arrayPtr+i)
	}
	printf("\n");
	printf("The sum of the array is: %d \n",*sumPtr );
	
//17: elements of an array in reverse order
	printf("The array in reverse order is: ");
	for(int i = sizeof(array)/sizeof(int)-1; i>=0; i--){
		printf("%d ", *(arrayPtr+i));
	}
	printf("\n");
	
//21: all alphabets
	printf("Al alphabets are: ");
	int position = 65;
	int* positionPtr = &position;
	//for(*positionPtr = 65; *positionPtr<=90; *positionPtr++){
	for(position = 65; position<=90; position++){
		printf("%c ", *positionPtr);
	}
	printf("\n");
//print string in reverse order
	printf("The string in reverse order is: ");
	char* strPtr = str;
	for(int i = Slength -1; i >=0; i--){
		printf("%c ", *(strPtr+i));
	}
	printf("\n");
	return 0;

	
}

	
	
