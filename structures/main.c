#include <stdio.h>
#include <string.h>
struct abonent {
    char name [10];
    char second_name[10];
    char tel[10];
    
};

int main(){
    struct abonent arr[100];
    int a;
    printf("1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\n");
    printf("\nВыберите действие ");
    scanf("%d",&a);
    char flag =1;
    int len=0;
    char name [10];
    char second_name[10];
    char tel[10];
    while(flag){
        switch (a)
        {
        case 1:
        
        
        printf("\nИмя ");
        scanf("%s",name);
        printf("\nФамилия ");
        scanf("%s",second_name);
        printf("\nНомер ");
        scanf("%s",tel);
        if (len<100){

        for(int i=0;i<strlen(name);i++){
            arr[len].name[i]=name[i];
        }

        for(int i=0;i<strlen(second_name);i++){
            arr[len].second_name[i]=second_name[i];
        }

        for(int i=0;i<strlen(tel);i++){
            arr[len].tel[i]=tel[i];
        }

        }
        else{
            printf("Больше 100 записей\n");
        }
        len++;
        printf("\nВыберите действие ");
        scanf("%d",&a);
        putchar('\n');
            break;
    
        case 2:
            
            
            printf("\nИмя ");
            scanf("%s",name);
            for(int i=0;i<len;i++){
                if (strcmp(arr[i].name, name) == 0) {
                    strcpy(arr[i].name, "0");
                    strcpy(arr[i].second_name, "0");
                    strcpy(arr[i].tel, "0");
            }
            }
            printf("\nВыберите действие ");
            scanf("%d",&a);
            putchar('\n');
            break;        
    
        case 3:
            
            printf("\nИмя ");
            scanf("%s",name);
            for(int i=0;i<len;i++){
                if (strcmp(arr[i].name, name) == 0) {
                printf("Name: %s\n",arr[i].name);
                printf("Second name: %s\n",arr[i].second_name);
                printf("Number: %s\n",arr[i].tel);}
            }
            printf("\nВыберите действие ");
            scanf("%d",&a);
            putchar('\n');
            break;          
        case 4:
            for(int i=0;i<len;i++){
                printf("Name: %s\n",arr[i].name);
                printf("Second name: %s\n",arr[i].second_name);
                printf("Number: %s\n",arr[i].tel);
            }
            printf("\nВыберите действие ");
            scanf("%d",&a);
            putchar('\n');
            break;
    
        case 5:
            flag = 0 ;
            return 1;
            break;
        }
    
    }
    
}