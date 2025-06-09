#include<stdio.h>
#include <string.h>
struct abonent {
    char name [10];
    char second_name[10];
    char tel[10];
};
void add(int *len,struct abonent *arr,char *name,char *second_name,char* tel);
void del(int *len,struct abonent *arr,char *name,char *second_name,char* tel);
void seek(int *len,struct abonent *arr,char *name,char *second_name,char* tel);
void print_all(int *len,struct abonent *arr,char *name,char *second_name,char* tel);