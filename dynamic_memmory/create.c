#include "list.h"

struct node *doubly_linked_list_create_node(){
	struct node *my_node = (struct node *)malloc(sizeof(struct node));
	fputs("Имя: ", stdout);
	scanf("%10s", my_node->name); 
	fputs("Фамилия: ", stdout);
	scanf("%10s", my_node->second_name);
	fputs("Номер: ", stdout);
	scanf("%10s", my_node->tel);
	putchar('\n');
	my_node->next=NULL;
	my_node->prev=NULL;
	return my_node;
}