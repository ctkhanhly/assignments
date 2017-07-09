#include <stdio.h>
int main(int argv, char *argc[]){
	int fibonacci[atoi(argc[1])]= {1,1};
	for(int i = 0; i<= atoi(argc[1]); i++){
		if(i>=2){
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];}
		printf("%d ", fibonacci[i]);
	}
		
