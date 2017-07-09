#include <stdio.h>
int main(int argv, char *argc[]){
	int base = atoi(argc[1]);
	int result = 1;
	for(int i = 1; i<= atoi(argc[2]); i++){
		result*= base;
	}
	printf("%d to the %d is: %d\n", atoi(argc[1]), atoi(argc[2]),result);
	return 0;
}
