//at the end of the string array, 'O' saying that this is the end of the array

#include <stdio.h>
int main(int argv, char* argc[]){
	int numbers[4] = {0};// print all 0
	char name[4] = {};
//{'a', 'a', 'a', 'a'}; put 4 sizes and no null at the end, would do weird things
//{'o'} only print o, why?, if not initialize, it's gonna filled
//with random thing


	//1st print them out raw
	printf("Numbers: %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);

	//set up the number
	numbers[0] =1;
	numbers[1] =2;
	numbers[2] =3;
	numbers[3] = 4;

	//set up names
	name[0] = 'N';
	name[1] = 'i';
	name[2] = 'c';
	name[3] = 'k';
	//name[4] = 'a';
	//name[5] = 'a';//if not in memory capacity, c does not know where to put it
//=> scatter all around memory
//cannot find terminator, go around, do weird things

	//print them out uninitialized
	printf("numbers %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);

	//print them out as a string
	printf("name: %s\n", name);
	//another way to use name
	char *another = "Nick";//array of characters in c
//string and array are very similar
//this is a pointer to a character

	printf("another: %s\n", another);
	
	printf("another each: %c, %c, %c, %c\n", another[0], another[1], another[2], 
		another[3]);
//what make command does, instead of gcc program.c -o program
//make program 
//make clean
	return 0;
}
