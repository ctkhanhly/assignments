#include <stdio.h>

int main(int argv, char *argc[]){

	float i = (float)atoi(argc[1]);//double is too big
	//int units = atoid(argc[1]);
	//float total, tax= 1.2;
	//change total in every if statement and total *= 1.2 afterwards
	//now printf.

	if(i>250){
	printf("%f\n", ((i-250)*1.5+ 100*1.2 + 100*0.75 + 50*0.5)*12/10);}
	else if( i>150){
	printf("%f\n", ((i-150)*1.2+ 100*0.75 +50*0.5)*1.2);}
	else if(i>50){
	printf("%f\n", ((i-50)*0.75+50*0.5)*1.2);}
	else{ printf("%f\n",i*0.5*1.2);}

	return 0;
	//printf("Your bill is $%.02f", total);// precision to 2 decimal points

//<=50, <=150, 250, else
}
