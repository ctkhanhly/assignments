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



struct Person { //why is it a pointer
//structure name Person, a junk of ram so I can have these in 1 block, these charactersistics point to the same person
	char name;
	int age;
	int height;
	int weight;
};


//look into malloc, assert, who, string duplicate

//memory allocator, this line give a junk of ram
struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert( who l = NULL);
//who.name-access name in object who-java
//who-: access who pointer- C lang
//(*who).name - C lang, when not pointer, can use the dot


	who -> name = strdup(name);
	who -> age = age;
	who -> height = height;
	who-> weight = weight;

	return who;
}

//look into free
void Person_destroy( struct Person *who)
{
	assert(who l = NULL);

	free(who -> name);
	free(who);
}

void Person_print (struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
}

//explain what main does here
int main(int argc, char *argv[]){

//make two people structures

	struct Person *joe = Person_create("Joe Alex", 32, 53, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
	
	//print these out and where they are in memory
	printf("Joe is at memory location: %p\n", joe);
	Person_print(joe);

	printf("Frank is at memory location: %p \n", frank);
	Person_print(frank);

	//make everyone age 20 yrs and print them again
	joe->age +=20;
	joe->height -=2;
	joe->weight +=40;
	Person_print(joe);
	
	frank->age +=20;
	//frank->height +=40;
	frank->weight +=40;
	Person_print(frank);

	//destroy both so we cna clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}
