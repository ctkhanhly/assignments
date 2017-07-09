#include <stdio.h>

int main(int argc, char *argv[])

{	//check sign

	if(atoi(argv[1]) > 0){
		printf("positive\n");
	}
	else if( atoi(argv[1]) < 0){
		printf("negative\n");}
	else{ printf("zero\n");}
	//check if odd or even

	if((atoi(argv[1]) %2) == 0){
		printf("even\n");
	}
	else{ printf("odd\n");}

	//what day?
	/* printf("Enter a number: ");
	int c = getchar();
	*/
	if(atoi(argv[1]) == 1){
		printf("Monday");}
	else if( atoi(argv[1]) == 2 ){
		printf("Tuesday");}
	else if(atoi(argv[1]) ==3){
		printf("Wednesday");}
	else if(atoi(argv[1]) == 4){
		printf("Thursday");}
	else if(atoi(argv[1]) ==5){
		printf("Friday");}
	else if(atoi(argv[1]) == 6){
		printf("Saturday");}
	else{ printf("Sunday");}

	return 0;
	
}

int Max(int a, int b){
	if(a>b)
	return a;
	else
	return b;
}
 
int max3(int a, int b, int c){
	if(Max(a,b) > c)
	return Max(a,b);
	else
	return c;
}


