#include "list.h"

void free_list(struct node *list){
	struct node *my_node;

	while(list){
		my_node = list->next;
		free(list);
		list = my_node;
	}
} 
