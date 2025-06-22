#include "list.h"

struct node *doubly_linked_list_add_end(struct node *list){
	struct node *new_node = doubly_linked_list_create_node();
	if (list==NULL){
		return new_node;
	}

	struct node *my_node=list;

	while(my_node->next){
		my_node=my_node->next;
	}

	my_node->next=new_node;
	new_node->prev=my_node;
	return list;	 
}