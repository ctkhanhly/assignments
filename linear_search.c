#include <stdio.h>
#include <time.h>

int main(int argc, char*argv[]){
	clock_t start,end;
	double cpu_time_used;

	start = clock();
//1: simple program to find an element in list
	int list[25] = { 5, 6, 7, 10, 100, 20, 30, 11,35};
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	int boolean = 2;
	int location;
	for(int i =0; i<9; i++){
		if(number == list[i]){
			boolean = 0;
			location = i;
			break;
		}
	}
	if(boolean ==0){
		printf("The number %d is in the list\n" , number);
	}
	else{ printf("The number %d is not in the list\n", number);}

//2: same as 1 but also print the location
	if(boolean ==0){
		printf("The number %d is in the list at location %d\n", number, location);}

//5 find how to time your program
end = clock();
cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
	printf("%lf \n ", cpu_time_used);//or %f
	return 0;
}


