#include "list.h"

struct node *doubly_linked_list_lookup(struct node *list){
	char name [STR_LEN];
	fputs("Имя: ", stdout);
	scanf("%10s", name); 

	while(list){
		if (strcmp(list->name, name) == 0){
			return list;
		}
		list=list->next;
	}
	return NULL;
}