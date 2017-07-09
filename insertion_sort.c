#include <stdio.h>
//best case: all sorted - count = n-1 
//worst case: count = (n-1)*n/2 
int main(int argc, char*argv[]){
//graph findings (size of input, number of operations)
	//int array[] = { 3,100,10,2,5,18,7,30,20,19};
	int array[] = { 3,100,10,2,5,18,7,30,20,19,50,12,33,22,44, 200, 134, 66, 73, 85};
	int min = 0;
	int count =0;
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");


	for(int i = 1; i<sizeof(array)/sizeof(int); i++){
		int temp = array[i];
		int m;
		for( m = i-1; m>=0; m--){
		if(temp <array[m]){
			array[m+1] = array[m];
			count++;	
		}
		else{ break;}
		}
		array[m+1] = temp;
		count++;
		
	}
	
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("Total operations: %d\n", count);

	return 0;
}
