#include <stdio.h>

int main(int argc, char *argv[])
{       		// ./test: argc is 1; ./test 1 2: argc is 3
	int i = 0;	//argc is always >=1
	if(argc == 1)  //argv: vector of characters, e.g "./test" 
	{
		printf("Not enough arguments. I'll die now.\n ");
	} else if(argc > 1 && argc < 4){
		printf("Here are your arguments: \n");
		
		for(i=0; i < argc; i++){
			printf("%s", argv[i]);
		}
		printf("\n");
	} /*else{
		printf("Ok, that's way too many arguments. \n");
	}*/
	return 0;// this says everything is ok
}
