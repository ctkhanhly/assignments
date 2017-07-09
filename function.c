#include <stdio.h>
#include <ctype.h>
//forward declaration
int can_print_it(char ch);
int print_letters(char arg[]);
//im gonna use this function later, do whatever u do
//1st may use 2nd, 2nd may use 

void print_argument(int argc, char* argv[]){//the order of thesecode parts are not important

	int i =0;
	
	for(i=0; i< argc; i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[]){
	
	int i = 0;

	for(i =0; arg[i] != '\o'; i++){
		char ch = arg[i];

		if(can_print_it(ch)){
			printf(" '%c' == %d", ch, ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch){
	return isalpha((int) ch) || isblank((int) ch);
}
int main(int argc, char* argv[]){
	print_arguments(argc, argv);
	return 0;
}

