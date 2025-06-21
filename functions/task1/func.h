#ifndef _FUNC_H_
#define _FUNC_H_

#include <stdio.h>
#include <string.h>

#define STRUCT_LEN 100
#define STR_LEN 10

struct abonent {
	char name [10];
	char second_name[10];
	char tel[10];
};

void add(int *len, struct abonent *arr, char *name, char *second_name, char* tel);
void del(int *len, struct abonent *arr, char *name);
void seek(int *len, struct abonent *arr, char *name);
void print_all(int *len, struct abonent *arr, char *name);
int ___exit(char *);

#endif 