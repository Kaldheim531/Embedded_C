#include "func.h"
void add(int *len, struct abonent *arr, char *name, char *second_name, char* tel) {
	printf("Имя: ");
	scanf("%10s", name); 
	printf("Фамилия: ");
	scanf("%10s", second_name);
	printf("Номер: ");
	scanf("%10s", tel);
	
	if (*len < 100) {
		strcpy(arr[*len].name, name);
		strcpy(arr[*len].second_name, second_name);
		strcpy(arr[*len].tel, tel);					
	} else {
		printf("Больше 100 записей\n");
	}  
}