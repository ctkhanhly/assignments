#include <stdio.h>
//github
int main(int argc, char* argv[]){
//write a program to read and print elements of array
	int array[11] = {0};
	for(int i = 0; i < 10; i++){
		array[i] = atoi(argv[i+1]);
		printf("%d ", array[i]);
	}
	printf("\n");
//print all negative elements in an array
	int sum = 0;
	int n0ofNeg = 0;
	printf("The negative elements are: ");
	for(int i = 0; i < 10; i++){
		if(array[i] <0){
		n0ofNeg++;
		printf("%d ", array[i]);}
	}
	printf("\n");
//sum of all array elements
	for(int i = 0; i<10; i++){
		sum+= array[i];
	}
	printf("Sum of all elements is: %d\n", sum);
//max and min element in an array
	int max = array[0];
	int min = array[0];
	for(int i = 0; i<9; i++){
		if(array[i+1] > max){
			max = array[i+1];
		}
		if(array[i+1]< min){
			min = array[i+1];}
	}
	printf("Max is : %d\n", max);
	printf("Min is : %d\n", min);
//find second largest element in an array
	int sndMax = min;
	for(int i = 0; i<9; i++){
		if((array[i+1] > sndMax) && array[i+1] != max){
		sndMax = array[i+1];}
	}	
		
	printf("Second largest element is: %d\n", sndMax);
//count total number of even and odd elements in the array
	int n0ofEven = 0;
	int n0ofOdd = 0;
	for(int i = 0; i<10; i++){
		if(array[i]%2){
			n0ofEven ++;
		}
		else{ n0ofOdd++;}
	}
	printf("Number of even elements is: %d\n", n0ofEven);
	printf("Number of odd elements is: %d\n", n0ofOdd);
//copy all elements of an array to another array
	int arrayCop[10] = {0};
	printf("The copied array is: ");
	for(int i = 0; i<10; i++){
		arrayCop[i] = array[i];
		printf("%d", arrayCop[i]);
	}
	printf("\n");
//insert an element in an array - argv[11] is number, argv[12] is the position
/*	for(int i = 9; i>= atoi(argv[12]); i--){
		array[i+1] = array[i];
	}
	array[atoi(argv[12])] = atoi(argv[11]);
	printf("The new array after the insertion is: ");
	for(int i = 0; i < 11; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
//delete an element in an array
	printf("The new array after the deletion is: ");
	for(int i = atoi(argv[12]); i<10; i++){
		array[i]= array[i+1];
	}
	for(int i = 0; i < 11; i++){
		printf("%d ", array[i]);
	}
	printf("\n"); 
*/
//print all unique elements in the array- appear only 1 time

	int boolean = 2;
	int n0Unq = 0;
	int dup[11] = {0};
	int dupFreq[11] = {0};
	//int zerosPos[11]= {0};
	//int n =0;
	//for(int i = 0; i <11; i++){
		//if(array[i] ==0){
			//zerosPos[n] = i;
			//n++;}
	//}
	int h = 0;	
	for(int i = 0; i <11; i++){
		
		for(int m = i+1; m<11; m++){
		if(array[m] == array[i]){
		boolean = 0;
		dup[h] = array[m];
		dupFreq[h] ++;}
		}
		if(boolean ==0){
		dupFreq[h]++;}
		h++;
		boolean = 2;
		
	}
	int n0InDup =0;
	for(int i =0; i<11; i++){
		if(dup[i] != dup[i+1]){
			n0InDup++;}
	}//2 elements dup-> at least 2 zeros at the end
	for(int i = 0; i<n0InDup; i++){
		for(int y = i+1; y<n0InDup; y++){
			if(dup[y] == dup[i]){
				dupFreq[i] += dupFreq[y];
				dupFreq[y] = 0;
			for(int m = y; m<n0InDup; m++){//delete same elements
		dup[m]= dup[m+1];
		dupFreq[m] = dupFreq[m+1];}
				dup[n0InDup-1] =0;
				dupFreq[n0InDup-1] =0;
				n0InDup--;
			
			}
		}
	}
				
	
	for(int i = 0; i < 11; i++){
		printf("%d ", dup[i]);
	}
	printf("\n");
	for(int i = 0; i < 11; i++){
		printf("%d ", dupFreq[i]);
	}
	printf("\n");

//print unique elements
	
/*	int booleanUnq = 2;//true
	int n0Dup =0;
	for(int i = 0; i<11; i++){
		/*if(dup[i] == 0 && i != zeroPos[0] && i!=zeroPos[1] 
&& i!=zeroPos[2] && i!= zeroPos[3] && i!= zeroPos[4] && i != zeroPos[5]
&& i!=zeroPos[6] && i!= zeroPos[7] && i!= zeroPos[8] && i!= zeroPos[9]
&& i!= zeroPos[10])}
	
		for(int y = 0; y<h; y++){
			if( dup[y]==0 && dup[y+1] !=0 && i==y){
				n0Dup ++;
				booleanUnq= 0; }
			else if(i == dup[y]){
				n0Dup++;
				booleanUnq = 0;}
			else if(dup[y] == 0){
				break;}
		}
		if(booleanUnq == 2){	
		printf("%d ", array[i]);
		n0Unq++;}
	}
		printf("\n");
	*/
	int booleanU = 2;//true
	printf("Unique elements are: ");
	for(int i = 0; i<11; i++){
		for(int m = 0; m<n0InDup; m++){
			if(array[i] == dup[m]){
				booleanU =0; //false
			}
		}
		if(booleanU !=0){
		printf("%d ", array[i]);}
		booleanU =2;
	}

//total of duplicate elements 	
	
	int n0Dup =0;
	for(int i =0; i< n0InDup; i++){
		n0Dup+= dupFreq[i];}
	printf("The total number of duplicate elements are: %d\n", n0Dup);
//count frequency of each element
//reversearray
	int reverseArray[11] = {0};
	printf("The reverseArray is: ");
	for(int y = 0; i<10; i++){
		reverseArray[y] = array[9-y];
		printf("%d", reverseArray[y]);
		
	}
	printf("\n");
		return 0;
} 

		
		
	
	
	
	
