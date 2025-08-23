#include "functions.h"
int main() {
	pid_t child_pid;
	int status;
	char str[100];
    
  char *mass[100];
    
  while (1){
  puts("Input programm name and options");
  fgets(str, sizeof(str), stdin);
    
  str[strcspn(str, "\n")] = '\0';
  if (strcmp(str,"exit")==0){
		break;
	}
  str_devide(str,mass);
  

  
	child_pid = fork();
	if (child_pid == 0) {
		execvp(mass[0], mass);	
		exit(5);
	} else {
		
		wait(&status);
		
	}
	}  
	return 0;
}