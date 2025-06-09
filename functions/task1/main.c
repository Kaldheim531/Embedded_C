#include "func.h"
int main(){
    struct abonent arr[100];
    int a;
    printf("1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\n");
    char flag =1;
    int len=0;
    char name [10];
    char second_name[10];
    char tel[10];
    while(flag) 
    {
        printf("\nВыберите действие ");
        scanf("%d",&a);
        putchar('\n');
        switch (a) 
        {
        case 1:
        
        add(&len,arr,name,second_name,tel);
        len++;
        
            break;
    
        case 2:
            
        del(&len,arr,name,second_name,tel);    
            
            
            break;        
    
        case 3:
            
        seek(&len,arr,name,second_name,tel);      
           
            break;          
        case 4:
            
        print_all(&len,arr,name,second_name,tel);         
            break;
    
        case 5:
            flag = 0 ;
            return 1;
            break;
        }
    
    }
    
}