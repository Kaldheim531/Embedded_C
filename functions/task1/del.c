#include "func.h"
void del(int *len, struct abonent *arr, char *name) {
  printf("Имя: ");
	scanf("%10s", name); 
	
  for(int i = 0;i < *len; i++){
    if (strcmp(arr[i].name, name) == 0) {
      strcpy(arr[i].name, "0");
      strcpy(arr[i].second_name, "0");
      strcpy(arr[i].tel, "0");
    }
  }    
}