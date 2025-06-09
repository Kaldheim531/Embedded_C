#include "func.h"
void add(int *len,struct abonent *arr,char *name,char *second_name,char* tel)
{
    printf("\nИмя ");
    scanf("%s",name);
    printf("Фамилия ");
    scanf("%s",second_name);
    printf("Номер ");
    scanf("%s",tel);
    if (*len<100) {

    for(int i=0;i<strlen(name);i++){
        arr[*len].name[i]=name[i];
    }

    for(int i=0;i<strlen(second_name);i++){
        arr[*len].second_name[i]=second_name[i];
    }

    for(int i=0;i<strlen(tel);i++){
        arr[*len].tel[i]=tel[i];
    }

    }
    else{
        printf("Больше 100 записей\n");
    }    
}