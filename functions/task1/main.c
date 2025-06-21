#include "func.h"
int main() {
	struct abonent arr[100];
	int action;
	printf("1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\n");
	char flag = 1;
	int len = 0;
	char name [10], second_name[10], tel[10];
	while (flag) {
		printf("\nВыберите действие: ");
		scanf("%d", &action);
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
		}						
	}
	return 0;
}
