#include <stdio.h>
#include "header.h"
int main(){

	puts("1) Сложение\n2) Вычитание\n3) Умножение\n4) Деление\n5) Выход\n");
	
	int flag=1;
	int a,b;
	
	while(flag==1 || flag==2 || flag==3 || flag==4 || flag==5 ){
		putchar('\n');
		fputs("введите номер операции: ",stdout);
	
		scanf("%d",&flag);
		putchar('\n');
		switch(flag){
			case 1:{
				fputs("Введите 1-oe число: ",stdout);
				scanf("%d",&a);
				putchar('\n');
				fputs("Введите 2-oe число: ",stdout);
				scanf("%d",&b);
				putchar('\n');
				printf("Результат: %d\n",add(a,b));
				break;
			}
			case 2:{
				fputs("Введите 1-oe число: ",stdout);
				scanf("%d",&a);
				putchar('\n');
				fputs("Введите 2-oe число: ",stdout);
				scanf("%d",&b);
				putchar('\n');
				printf("Результат: %d\n",sub(a,b));
				break;
			}
			case 3:{
				fputs("Введите 1-oe число: ",stdout);
				scanf("%d",&a);
				putchar('\n');
				fputs("Введите 2-oe число: ",stdout);
				scanf("%d",&b);
				putchar('\n');
				printf("Результат: %d\n",mul(a,b));
				break;
			}
			case 4:{
				fputs("Введите 1-oe число: ",stdout);
				scanf("%d",&a);
				putchar('\n');
				fputs("Введите 2-oe число: ",stdout);
				scanf("%d",&b);
				putchar('\n');
				printf("Результат: %d\n",div(a,b));
				break;
			}
			case 5:{
				flag = 0;
				break;
			}
		}
	}
	return 0;
}