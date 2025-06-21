#include "func.h"
void print_all(int *len, struct abonent *arr, char *name) {
	for(int i = 0;i < *len; i++) { 
		printf("Имя: %s\n", arr[i].name);
		printf("Фамилия: %s\n", arr[i].second_name);
		printf("Номер: %s\n", arr[i].tel);
		putchar('\n');
	}      
	
}