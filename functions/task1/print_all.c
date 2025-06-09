#include "func.h"
void print_all(int *len,struct abonent *arr,char *name,char *second_name,char* tel)
{
    for(int i=0;i<*len;i++){ 
        printf("Name: %s\n",arr[i].name);
        printf("Second name: %s\n",arr[i].second_name);
        printf("Number: %s\n",arr[i].tel);
        putchar('\n');
    }  
}