#include <stdio.h>
int main(int argv, argc[]){
	int a= atoi(argc[1]), b = atoi(argc[2]);
	if(a<b)
{	int temp =a;
	a =b;
	b=a;}
	while( a%b !=0){
		a= a%b;
		if(a<b){
		int temp = a;
		a = b;
		b = a;}
	}
	printf("The greatest common factor is: %d\n", b);
		
		
