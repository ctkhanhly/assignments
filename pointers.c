#include <stdio.h>
int main(int argc, char* argv[]){
	//create 2 arrays
	int age[] = { 23, 43, 22, 29,2};//big junk of memory, pointer points to
	char* name[] ={ "Alan", "Frank", "Marry", "John", "Lisa"};

	//get the sizes of age
	int count = sizeof(age)/sizeof(int);
	int i =0;

	//first way using indexing
	for(i=0; i<count; i++){
		printf("%s has %d years alive. \n", name[i], age[i]);
	}
	
	printf("------------\n");

	//setup the pointers to the start of the arrays
	int *cur_age = age;//decalre a pointer using 
	char **cur_name = name;
	//declare: type *ptr
	//*ptr: value of pointer
	//ptr: pointer name - whatever u name
	//*(ptr+i): pointer to elements?
	//&thing <- address of thing
	//type *ptr = &thing: point ptr to pointer of thing
	//[ptr, ptr++]
	//ptr++
	
//pointer points to a location b/c it stores the address of the location
//each byte has an address
//pointers are variables that store the address of another variable
//pointers also takes space in memory, at a location
//*p is value of address, it changes, the value of the address also changes
	//second way usin pointers
	//get value on that address
	//position is 0 if not declared
	//ages point to sth, *age point to the value of the pointer
	//*(age+1): second value . e.g: [*age value; *(age+1) value]
	//print a value of a pointer- memory address, not value itself
	for(i=0; i<count; i++){
		printf("%s is %d years old. \n", *(cur_name+i), *(cur_age+i));
	}//same as below
		printf("---------\n");

	//third way, pointers as arrays
	for(int i = 0; i<count; i++){
		printf("%s is %d years old again. \n", cur_name[i], cur_age[i]);
	}	
	//printf("%s\n", *(cur_name));- Alan
	printf("%x \n",cur_name);//address of pointer cur_name
//put pointer to a pointer- 2 dimensional array
	int num;
	int *numPtr;

	num = 42;
	numPtr = &num; 
	printf( "%p %d \n", numPtr, *numPtr);//%p: percentage, this case will 
//print address
//address: hexa number etc 
	
	int a = 1;
	int b =2;
	int c =3;

	int *p;
	int *q;

	q = &a;//point at a, which has a reference value 1
	p = &b;
	
	c= *p;
	q = p;//same address as b
	*p = 13;//value p points at become 13, *q =13; 13: reference value

	//dont do this
//dont do reference w/o pointing the pointer sw 1st
	int *x;
	*x = 42;

	
//take whatever the value q pointing at to put in c, a is still there

	return 0;
}
