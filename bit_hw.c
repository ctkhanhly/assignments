#include <stdio.h>

int main(int argc, char* argv[]){
	int number = atoi(argv[1]);
	//int test = 0;
//check if least s. bit is set
	if(number&1){ //== 1){
		printf(" The least significant bit is set\n");
	}
	else{
		printf("The least significant bit is not set\n");
	}
//check if most significan bit is set
//256
//4 bytes = 32 bits, 1byte = 8 bits
	if(number & 1<<(sizeof(int)*8-1)){
		printf(" The most significant bit is set\n");
	}
	else{
		printf("The most significant bit is not set\n");
	}
	//printf("%d ", sizeof(int));
//get nth bit
	int nth = atoi(argv[2]);
	int number_nth = (number& 1<<(nth-1))>>(nth-1);
	printf("The number at nth bit is %d\n",number_nth); 
//set the nth bit- argv[2]<=4
	
	printf("The number is %d and going to be set at position %d\n",
number, nth);//position<=4
	
	number = number| 1<<(nth-1);
	printf("The number after being set is %d\n", number);
//clear the nth bit
	int clear_number = (number>>nth<<nth);
	for(int i = 0; i<nth-1; i++){
		clear_number = clear_number |(number& 1<<i)>>i;
	}
	//number = number<<(sizeof(int)*8-nth+1)>>(sizeof(int)*8-nth+1);
	//number = number<<sizeof(int)*8-nth+1;
	printf("The number after cleared at nth is %d\n", clear_number);
//toggle the nth bit
	int toggle_number =  number ^ 1<<nth-1;
	printf("The number after toggled at nth is %d\n", toggle_number);
//highest set bit
	int h;
	for( h = sizeof(int)*8-1; ((number& 1<<h)>>h)!=1; h--){
		}; h++;
	printf("Hghest set bit is: %d", h);
//leading zeros
	int leadingC =0;
	printf("%d ", 1<<sizeof(int)*8-2);
	for(int m = 0; (1<<sizeof(int)*8-1>>m)>number; m++){
		leadingC++;
		printf("%d ", 1<<sizeof(int)*8-1>>m);	
	}
	printf("Number of leading zeros: %d\n", leadingC);

//convert decimal to binary
	//int test = 1;
	int binary=0;
	int numberT= number;
	int i;
	int biRe[sizeof(int)*8]= {0};
	while(numberT>0){
	for( i=0; numberT>=(1<<i); i++){
		
	}
	
	binary = binary | (1<<(i-1));
	//printf("%d ", 1<<(i-1));
	biRe[sizeof(int)*8-i]=1;
	numberT -= 1<<(i-1);
	}
	//printf("\n");
	printf("Decimal number: %d, binary number: %d\n", number, binary);
	for(int y =0; y< 32; y++){
		printf("%d", biRe[y]);
	
	}
	printf("\n");
//swap number
	int a = 5;
	int b = 4;
	printf("The numbers are : %d %d\n", a,b); 
	a = a^b;
	b = a^b;//both + just a( just b in both) =a
	a = a^b;//both(in b=a) + just b( just a in both)
	printf("The numbers after swap are : %d %d\n", a,b); 
	

	
	return 0;
}
