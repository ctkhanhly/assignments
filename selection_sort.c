#include <stdio.h>
//best case: 
//int swap( int a, int b){
	//int temp = a;
	//a=b;
	//b= temp;
//}
int swap(int*array, int a, int b){
	int temp = array[a];
	array[a]= array[b];
	array[b] = temp;
}
//visualgo.net/en/sorting
int main(int argc, char* argv[]){
	//selection sort
	//int array[] = { 3,100,10,2,5,18,7,30,20,19};
	int array[] = { 3,100,10,2,5,18,7,30,20,19,50,12,33,22,44, 200, 134, 66, 73, 85};
	int min = 0;
	int count =0;
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");

	for(int m = 0; m<sizeof(array)/sizeof(int); m++){
		min = m;
	for(int i = m; i <(sizeof(array)/sizeof(int)-1); i++){
		if(array[i+1]<array[min]){
			min = i+1;
			//count++;
			printf("%d ", array[min]);

		}
		count++;
	}
	if (min != m){
	//int temp = array[m];
	//array[m] = array[min];
	//array[min] = temp;
	swap(array, m,min);
	count++;
	}
	count++;
	}
	printf("\n");
	
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("Total operations: %d\n", count);
	
	/*for(int i = 0; i <9; i++){
		if(array[i+1]<array[min]){
			min = i+1;
		}
	}
	printf("Min is : %d\n", array[min]);*/
	return 0;
}
	
