//new header files what does each give you
//malloc, assert, free, main, functions that u dont know
//remember about man 2 or man 3 function
//Write a comment for every single line explaning what it does in English
//Trace through each function and variable so u know where it comes from in the program
//Look up any symbol you dont understand

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//e.g: clock_t is a type
//_t means unsigned or no negative values
//typeof struct Person- define type Person


//define new structure, e.g: int is a structure
//Person: structure tag
struct Person { //why is it a pointer
//structure name Person, a junk of ram so I can have these in 1 block, these charactersistics point to the same person


//variables of the structure
	char name;//member definition
	int age;
	int height;
	int weight;
};//before semicolon can add one or more varibles, optional


//look into malloc, assert, who, string duplicate

//memory allocator, this line give a junk of ram
struct Person *Person_create(char *name, int age, int height, int weight)
{
//malloc creates buckets for 16,64, 256, 1024 byte structures
//gives u raw memory and here's the pointer for it
//if you ask memory of a given size, it rounds to up to the next bukcet sie
//void * malloc: return pointer to void - void pointer- pointer that does not have specific type
	struct Person *who = malloc(sizeof(struct Person));
	assert( who != NULL);//it makes sure that it in here is true, if not, throw an array
//does not have to cast, c automatically look at the type on the left
//who.name-access name in object who-java
//who-: access who pointer- C lang
//(*who).name - C lang, when not pointer, can use the dot


	//initialize each field of the struct, this is what person create does
	who -> name = strdup(name);// make sure that this actually owns the name
//who-> name = name; if char * name(define)
	who -> age = age;
	who -> height = height;
	who-> weight = weight;

	return who;
}

//look into free
void Person_destroy( struct Person *who)
{
	//if my pointer is null, allocate memory again
	assert(who != NULL);//who is the pointer to the struct Person, that is allocated by malloc for struct Person

	free(who -> name);//free in memory, python has garbage collector
	free(who);//who is now up for grabs,not pointing anywhere
//done w the memory address, now malloc can use for other allocation
//can only used u=in dynamically allocated
}

void Person_print (struct Person *who)
{
	printf("Name: %s\n", who->name);//deference pointer and access field, go to name part, get what in name
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
}

//explain what main does here
int main(int argc, char *argv[]){

//make two people structures

	//create 2 ppl with initialized values
	struct Person *joe = Person_create("Joe Alex", 32, 53, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
	
	//print these out and where they are in memory
	printf("Joe is at memory location: %p\n", joe);
	Person_print(joe);

	printf("Frank is at memory location: %p \n", frank);
	Person_print(frank);

	//make everyone age 20 yrs and print them again
	joe->age +=20;//deference pointer, access age, add 20
	joe->height -=2;
	joe->weight +=40;
	Person_print(joe);
	
	frank->age +=20;
	//frank->height +=40;
	frank->weight +=20;
	Person_print(frank);

	//destroy both so we cna clean up
	Person_destroy(joe);//what if null instead of joe
	Person_destroy(frank);
//what will happen free(joe) and then try to print it
//try to break it to understand it
	return 0;
}
