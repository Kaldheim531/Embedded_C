#include "func.h"
void seek(int *len, struct abonent *arr, char *name) {
	printf("Имя ");
	scanf("%s",name);
	putchar('\n');
	for(int i = 0;i < *len; i++){
		if (strcmp(arr[i].name, name) == 0) {
			printf("Имя: %s\n", arr[i].name);
			printf("Фамилия: %s\n", arr[i].second_name);
			printf("Номер: %s\n", arr[i].tel);}			
	}      
}