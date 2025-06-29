#include "header.h"
int div(int a, int b){
	if (b==0){
		puts("на 0 делить нельзя");
		return 0;
	}
	return a / b;
}