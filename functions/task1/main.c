#include "func.h"
int main() {
	struct abonent arr[STRUCT_LEN];
	char action;
	printf("1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\n");
	char flag = 1;
	int len = 0;
	char name [STR_LEN], second_name[STR_LEN], tel[STR_LEN];

	while (flag) {
		printf("\nВыберите действие: ");
		scanf("%hhd", &action);
		putchar('\n');

		switch (action) {
			case 1: {
				add(&len, arr, name, second_name, tel);
				len++;
				break;
			}
			case 2: {
				del(&len, arr, name);
				break;
			}
			case 3: {
				seek(&len, arr, name);
				break;
			}
			case 4: {
				print_all(&len, arr, name);
				break;
			}
			case 5: {
				___exit(&flag);
				break;
			}
			default: {
				___exit(&flag);
				break;
			}
		}						
	}
	return 0;
}
