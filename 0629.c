#include <stdio.h>
int main(int argc, char* argv[]){
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Nick";
	char full_name[] = {'N', 'i', 'c', 'k', ' ', 'M', 'e', 'l', '\o'};
	//unsighed vs sighed

	printf("The size of an int is : %ld\n", sizeof(int)); // return the size in bytes; e.g: print 4 (bytes)/int
	printf("The size of areas (int[]) is: %ld\n", sizeof(areas));//4 bytes * 5

	printf("The number of ints in areas is: %ld\n",sizeof(areas)/sizeof(int));
	printf("The first area is %d, the 2nd %d. \n", areas[0], areas[1]);

	printf("The size of char isL %ld\n", sizeof(char));//1 byte/char
	printf("The size of name (char[]) is: %ld\n", sizeof(name));//4 + null byte
	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

	printf("The size of full_name (char[]) is: %ld\n", sizeof(full_name));//9
	printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

	printf("name \"%s\" and full_name\" %s\"n",name, full_name);

	return 0;
}
