#include <stdio.h>
#include <time.h>//time
int main(int argc, char* argv[]){
//time
	clock_t start,end;
	double cpu_time_used;

	start = clock();
//
	int list[25] = { 1,5, 6, 7, 10, 11,15,34,100,120};
	int high = 9;
	int low = 0;
	int mid =(high + low)/2;
	int target = atoi(argv[1]);
	int boolean = 2;
	for(int i =0; i<9; i++){
		if(target == list[mid]){
			boolean = 0;
			break;
		}
		else if(target> list[mid]){
			low = mid + 1;
			mid = (high+ low)/2;
		}
		else{ high = mid-1;
			mid = (high + low)/2;}
	}
	if(boolean ==0){
		printf("The target %d is in the list, at location %d\n", 
	target, mid);}
	else{
		printf("The target %d is not in the list\n", target);}
	//time
	end = clock();
	cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
	printf(" The time is: %lf \n", cpu_time_used);
//write a program that plays battleship with you
	return 0;
}
