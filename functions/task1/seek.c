#include "func.h"
void seek(int *len,struct abonent *arr,char *name,char *second_name,char* tel)
{
    printf("Имя ");
    scanf("%s",name);
    for(int i=0;i<*len;i++){
        if (strcmp(arr[i].name, name) == 0) {
        printf("Name: %s\n",arr[i].name);
        printf("Second name: %s\n",arr[i].second_name);
        printf("Number: %s\n",arr[i].tel);}
    }   
}