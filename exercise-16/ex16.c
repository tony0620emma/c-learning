#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
/* This is a structure called Person */
struct Person {
	/* 4 components of this structure*/
	char *name; // a pointer point to the start position of name
	int age;    // an integer 
	int height; 
	int weight;
};

/* create the structure and return a pointer to it */
struct Person *Person_create(char *name, int age, int height, int weight)
{
	/* first we need memory to store this structure */
	struct Person *who = malloc(sizeof(struct Person));
	/* check whether it's valid or not */
	assert(who != NULL);

	/* strdup will malloc, too */
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	/* return the pointer of this created structure */
	return who;
}

/* destroy this structure and free up the memory */
void Person_destroy(struct Person *who)
{
	/* check we are doing the right thing 
	 * if this pointer was invalid, free them
	 * may cause dangerous results */
	assert(who != NULL);

	/* remember to free the memory pointed by pointer */
	free(who->name);
	/* free the rest variables */
	free(who);
}

/* just print them */
void Person_print(struct Person *who)
{
	printf("Name : %s\n", who->name);
	printf("\tAge : %d\n", who->age);
	printf("\tHeight : %d\n", who->height);
	printf("\tWeight : %d\n", who->weight);
}

/* entry point */
int main(int argc, char *argv[])
{
	/* create two structs */	
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	printf("Joe is at memory location %p:\n", joe);
	Person_print(NULL);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);
	
	printf("-----------------");

	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);
	
	/* must destroy them, or it will cause memory leak */
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}	
