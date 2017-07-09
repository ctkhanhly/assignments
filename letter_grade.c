#include <stdio.h>

int main( int argc, char *argv[])
{
	/* int sum =0;
	for(int i = 0; i< 5; i++{	
	printf("Enter your grade: ");
	int c = getchar();
	sum+= c;
	}
	int agv = sum/5;
	*/
	int sum;
	for(int i = 1; i<=5; i++){
	sum+= atoi(argv[i]);
	}
	double avg = sum/5;

	if(avg>90){
	printf("A\n");}
	else if(avg >80){
	printf("B\n");}
	else if(avg >70){
	printf("C\n");}
	else{ printf("D\n");}

	if(atoi(argv[1]) > atoi(argv[2]){
	printf("Max of first 2 is: atoi(argv[1]\n");}
	else{ printf("Max of first 2 is: atoi(argv[2]\n");}
	
	return 0;
}

	
	
	
