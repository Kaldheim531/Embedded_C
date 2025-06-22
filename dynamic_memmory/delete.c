#include "list.h"

struct node *doubly_linked_list_delete(struct node *list){
	char name [STR_LEN];
	fputs("Имя: ", stdout);
	scanf("%10s", name); 
	struct node *my_node = list;

	while(my_node){
		if (strcmp(my_node->name, name) == 0){
			if (my_node->prev==NULL){
				list = my_node->next;
			} else {
				my_node->prev->next=my_node->next;
			}		
			if (my_node->next != NULL){
				my_node->next->prev=my_node->prev;
			}
			free(my_node);
			return list;
		}
		my_node = my_node->next;
	}
	return list;
}