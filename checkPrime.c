#include <stdio.h>
#include <math.h>
int main(int argv, char *argc[]){
	int boolean = 2;
	double sqr = sqrt((double)atoi(argc[1]))+0.5;
	for(int i = 2; i < sqr; i++){
		if(i*i > atoi(argc[1])){
			boolean = 0;}
		if(atoi(argc[1])%i ==0){
			boolean = 0;
			}
	}
	if(boolean == 0){
		printf("It is a not prime number\n");}
	else{ printf("It is a prime number\n");}
	boolean = 2;

//print all prime numbers between 1 and n
/*	printf("Prime numbers between 1 and n are: ");
	for(int y = 2; y< atoi(argc[2]); y++){
		for(int i = 2; i <= sqrt(atoi(argc[1])); i++){
		if(i*i > atoi(argc[1])){
			boolean = 0;}
		if(atoi(argc[1])%i ==0){
			boolean = 0;
			}
		}
		if(boolean != 0){
			printf("%d ", y);}
		
	}
//print all prime factors of a number
	printf("All prime factors of a number is: ");
	for(int y = 2; y< atoi(argc[2]); y++){
		for(int i = 2; i <= sqrt(atoi(argc[1])); i++){
		if(i*i > atoi(argc[1])){
			boolean = 0;}
		if(atoi(argc[1])%i ==0){
			boolean = 0;
			}
		if(boolean !=0 && (atoi(argc[2])%y == 0)){
			printf("%d ", y);}
		}
	}
*/
	printf("\n");
	return 0;
}
	
