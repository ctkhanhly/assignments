#include <stdio.h>
//best case: n-1, no swap 1 iteration
//worst case: n+1 *n/2
int swap(int*array, int a, int b){
	int temp = array[a];
	array[a]= array[b];
	array[b] = temp;
}
int main(int argc, char* argv[]){
	//int array[] = { 3,100,10,2,5,18,7,30,20,19};
	int array[] = { 3,100,10,2,5,18,7,30,20,19,50,12,33,22,44, 200, 134, 66, 73, 85};
	int min = 0;
	int count =0;
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	
	int booleanO =2;
	for( int i =sizeof(array)/sizeof(int)-1; i>0; i--){
		//while(array[i+1] <array[i]){
		for(int m = 0; m<i; m++){
		if(array[m+1] < array[m]){
			swap(array, m, m+1);
			count++;

		}
		}
		count++;
		//}
		/*for(int y =0; y< sizeof(array)/sizeof(int); y++){
			if(array[y+1]<array[y]){
				booleanO = 0;
				break;}
		}
		if(booleanO ==2){
			break;}*/
	}
	for(int i = 0; i<sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("Total operations: %d\n", count);

	
	return 0;
}
