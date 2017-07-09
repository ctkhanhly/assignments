#include <stdio.h>
int main(int argc, char* argv[]){
	int i = 0;
	
	//go through each string in argv
	for(i= 0; i< argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}
	//let's make our own array of string
	char* states[] = {"california", "new york", "oklahoma", "texas"};
//array is a continued block of memory
	int num_states = 4;

	for(int i =0; i< num_states; i++){ //when i = 5, no space in memory 
		printf("states %d: %s\n", i, states[i]);
	}

	return 0;
}
