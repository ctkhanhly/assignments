#include <stdio.h>
#include <math.h>

int main(int argv, char *argc[]){	//int argc is correct but anyway
int i = 1 ;
//scanf()

	while(i<= atoi(argc[1])){
		printf("%d ", i);
		i++;
	}
	printf("\n");
	
	int y = atoi(argc[1]);
	while(y>0){
		printf("%d ", y);
		y--;
	}
	printf("\n");

	int m =97;
	// char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	//while(m< strlen(alphabet)){
		//prinf("alphabet[m]");
		//m++;
	//}
	
//ascii
	while(m< 123){
		printf("%c ",m);
		m++;
	}
	printf("\n");
//even
	int even = atoi(argc[1]);
	printf("All even numbers: ");
	while(even>0){
		if(even%2 ==0){
		printf("%d", even);}
		even--;
	}
	printf("\n");
//odd
	int odd = atoi(argc[1]);
	printf("all odd numbers: ");
	while(odd>0){
		if(odd%2 !=0){
		printf("%d",odd);}
		odd--;
	}
		printf("\n");
//sum of all numbers between 1 and n
	int sum =0;
	for(int i = 1; i<=atoi(argc[1]); i++){
		sum+=i;
	}
	printf("Sum of all numbers between 1 and n: %d",sum);
	printf("\n");
//sum all even & odd
	int sumEven = 0;
	for(int i = 1; i< atoi(argc[1]); i++){
		if(i%2==0){
		sumEven += i;
		}
	}
	printf("Sum of all even is: %d\n", sumEven);
	
printf("Sum of all odd is: %d\n", sum - sumEven); 

//multiplication number:
	printf("Multiplication table of the number is: \n");
	for(int i = 1; i <= atoi(argc[1]); i++){
		printf(" %d * %d = %d ", i, atoi(argc[1]),i*atoi(argc[1]));
	}
	printf("\n");

//count total digits of a number - argc[2]
	int totalDigits =0;
	int n0ofDigits = 0;
	int proOfDigits = 0;
	int firstDigit = (atoi(argc[2]))%10;
	int reverseNumber = 0;

	for(int i = atoi(argc[2]); i >0; i/=10){
		totalDigits+= i%10;
		n0ofDigits ++;
		proOfDigits *= (i%10);
		firstDigit = i%10;
		reverseNumber = (reverseNumber+i%10)*10;
	}
		reverseNumber/=10;
	printf("The reverse number is: %d \n", reverseNumber);
	printf("Total digits of the number is: %d\n", totalDigits);
	printf("Number of digits: %d \n", n0ofDigits);
	printf("The first digit is: %d \n", firstDigit);
	printf("The last digit is: %d \n", atoi(argc[2])%10);
	printf("The sum of first and last digit is: %d", atoi(argc[2])%10 + firstDigit);

	if(reverseNumber == atoi(argc[2])){
		printf("The number is palidrome");}
	else{ printf("The number is not palidrome");}
//The frequency of any digit - argc[3] - <10
	int freOfDigit[10]= {0};//has to initialize 1st be4 using
	for(int i = atoi(argc[2]); i>0; i/=10){
		freOfDigit[i%10]++;
	}
	printf("The frequency of digit in argc[3] is: %d \n", freOfDigit[atoi(argc[3])] );
//Print any number in words	

//swap number:
	//int swapNumber = atoi(argc[2])%10;
	//swapNumber= reverseNumber - atoi(argc[2])%10*pow(10, n0ofDigits-1) + firstDigit;
	//printf("Swap number is: %d\n", swapNumber);
//factorial of a number
	int factorial =1;
	for(int i = atoi(argc[3]); i > 1 ; i--){
		factorial*=i;
	}
	printf("Factorial of argc[3] is: %d\n", factorial);
//factors of a number:
	printf("Factors if argc[3] are: ");
	for(int i= atoi(argc[3]); i >1; i--){
		if( atoi(argc[3]) % i ==0){
			printf("%d ", i);}
	}
	printf("\n");
				
	return 0;
//argc 1: 8, argc 2: 4digit number, argc 3: <10
	

}
	
