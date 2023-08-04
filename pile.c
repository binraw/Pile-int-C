#include <stdio.h>
#include "stack.h"

int main(void){
	
	
	Stack sta = new_stack();
	
	printf("\n--------------------------\n\n");
	printf("Taille de la Pile : %d\n",stack_length(sta));
	print_stack(sta);	
	printf("\n--------------------------\n\n");
	sta = push_stack(sta,14);
	sta = push_stack(sta,47);
	sta = push_stack(sta,23);
	sta = push_stack(sta,31);
	print_stack(sta);
	printf("Sommet actuel : %d\n",top_stack(sta));
	printf("Taille de la Pile : %d\n",stack_length(sta));
	printf("\n--------------------------\n\n");
	sta = pop_stack(sta);	
	printf("Taille de la Pile : %d\n",stack_length(sta));
	print_stack(sta);	
	printf("Sommet actuel : %d\n",top_stack(sta));
	sta = clear_stack(sta);

	printf("\n--------------------------\n\n");
	printf("Sommet actuel : %d\n",top_stack(sta));
	printf("Taille de la Pile : %d\n",stack_length(sta));
	print_stack(sta);	
	return 0;

}



