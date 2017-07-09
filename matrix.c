// add 2 matrices
#include <stdio.h>
int main(int argc, char*argv[]){
	int matrix1[3][3] = {1,2,3,  6, 19,4, 3,5, 9};
	int matrix2[3][3] = {4,7,10, 3,4,7, 3,3,0};
	int sum[3][3] ={0};
	int diff[3][3] ={0};    
	for(int i = 0; i<3; i++){
		for(int y = 0; y<3; y++){
			sum[i][y] = matrix1[i][y] + matrix2[i][y];
			diff[i][y] = matrix1[i][y] - matrix2[i][y];
		}
	}
	printf("The difference of 2 matrices are: ");
	for(int i = 0; i<3; i++){
		for(int y = 0; y<3; y++){
			printf("%d ", diff[i][y]);
		}
	}
	printf("\n");
	printf("The sum of 2 matrices are: ");
	for(int i = 0; i<3; i++){
		for(int y = 0; y<3; y++){
		printf("%d ", diff[i][y]);
		}
	}
	printf("\n");
//multiply 2 matrices
	int mulM[3][3] = {0};//row of 1 and column of 2; column 1 = row 2
	for(int i = 0; i <3; i++){
		for(int m = 0; m<3; m++){
		for(int y =0; y<3; y++){
			mulM[i][m] += (matrix1[i][y]*matrix2[y][m]);
		}
		}
	}
//scalar multiplication- argv[1]
	int scaM[3][3] = {0};
	printf("Scalar multiplication of matrix1 and argv[1] is: ");
	for(int i = 0; i<3; i++){
		for(int y =0; y<3; y++){
			scaM[i][y] = atoi(argv[1])* matrix1[i][y];
			printf("%d ", scaM[i][y]);
		}
	}
		printf("\n");

	
	return 0;
}
	

 
