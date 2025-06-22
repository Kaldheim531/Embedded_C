#include "list.h"

void print_liked_list(struct node * list){
	struct node *my_node = list;
	
	while (my_node){
		printf("%s\n%s\n%s\n",my_node->name,my_node->second_name,my_node->tel);
		my_node=my_node->next;
		putchar('\n');
	}
}
