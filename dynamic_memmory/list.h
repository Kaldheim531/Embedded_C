#ifndef _LIST_H
#define _LIST_H
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_LEN 10

struct node
{
	struct node *prev; 
	char name [10];
	char second_name[10];
	char tel[10];
	struct node *next; 		
};

void free_list(struct node *list);
int ___exit(char * flag);
void print_liked_list(struct node * list);
struct node *doubly_linked_list_add_end(struct node *list);
struct node *doubly_linked_list_lookup(struct node *list);
struct node *doubly_linked_list_delete(struct node *list);
struct node *doubly_linked_list_create_node();

#endif

