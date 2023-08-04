#include <stdio.h>
#include <stdlib.h>
#include "stack.h"




Stack new_stack(void)

{

return NULL;
}



Bool is_empty_stack(Stack st){

	if(st == NULL)
		return true;

	return false;
}

Stack push_stack(Stack st, int x)
{

StackElement *element;

element = malloc(sizeof(*element));
if(element== NULL){
		fprintf(stderr, "Probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);

}
	element->value = x;
	element->next = st;

	return element;

	

}


Stack pop_stack(Stack st)
{
	StackElement *element;
	if(is_empty_stack(st))
		return new_stack();
	element = st->next;
	free(st);
	return element;

}


void print_stack(Stack st)
{
if(is_empty_stack(st))
{
	printf("rien a afficher, la Pile est vide\n");
	return;
}
while(!is_empty_stack(st))
{
	printf("[%d]\n", st->value);
	st = st->next;
}

}

int stack_length(Stack st)
{
	int length =0;
	while(!is_empty_stack(st))
	{
		length++;
		st=st->next;
	}
	return length;
}


int top_stack(Stack st)
{
	if(is_empty_stack(st))
	{
		printf("Aucune donnees dans la pile.\n");
		return -1;
	}

	return st->value;

}

Stack clear_stack(Stack st)
{

	while(!is_empty_stack(st))
		st = pop_stack(st);
	return new_stack();

}
