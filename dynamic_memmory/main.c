#include "list.h"

int main() {
	struct node *head = NULL;
	struct node *res;
	char action;
	puts("\n1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход");
	char flag = 1;

	while (flag) {
		fputs("\nВыберите действие: ", stdout);
		scanf("%hhd", &action);
		putchar('\n');
		switch (action) {
			case 1: {
				head = doubly_linked_list_add_end(head);
				break;
			}
			case 2: {
				head = doubly_linked_list_delete(head);
				break;
			}
			case 3: {
				res=doubly_linked_list_lookup(head);
				printf("\n%s\n%s\n%s\n",res->name,res->second_name,res->tel);
				break;
			}
			case 4: {
				print_liked_list(head);
				break;
			}
			case 5: {
				free_list(head);
				___exit(&flag);
				break;
			}
			default: {
				free_list(head);
				___exit(&flag);
				break;
			}
		}						
	}
	return 0;
}
