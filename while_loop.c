#include <stdio.h>
int main( int argv, char*argc[]){
	int i=24;// = 0;
	//by default in most system, c will initialize a number to 0
	/* while(i<25){
		printf("%d ",i);
		i++;
	}
	*/
	while(i>=0){
		printf("%d ",i);
		i--;
	}
	printf("\n");

	return 0;
}
