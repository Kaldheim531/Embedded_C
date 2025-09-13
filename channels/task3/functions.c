#include "functions.h"

void str_devide(char *str,char *mass[])
{
  char *buff = strtok(str, " ");
    int i=0;
    while(buff != NULL) {
        
        mass[i++] = buff; 
        buff = strtok(NULL, " "); 
    }
    mass[i] = NULL;    
}

void str_devide1(char *str,char *mass[])
{
  char *buff = strtok(str, "|");
    int i=0;
    while(buff != NULL) {
        
        mass[i++] = buff; 
        buff = strtok(NULL, "|"); 
    }
    mass[i] = NULL;    
}
