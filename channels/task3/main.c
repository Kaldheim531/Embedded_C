#include "functions.h"

int main() {
	int status;
	char str[100];
	char *mass[100];
  char str1[100];
  char str2[100];
  char *mass1[100];
  char *mass2[100];
    
  while (1) {
	int pipefd[2];
	pipe(pipefd);
  printf("Input programm name and options: ");
	
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  if (strcmp(str,"exit")==0){
		break;
	}
	
  str_devide1(str,mass);
	putchar('\n');
  for(int i = 0; mass[i] != NULL; i++) {
		
    printf("mass[%d] = %s\n", i, mass[i]);
  }

  putchar('\n');
  
  strcpy(str1,mass[0]);                                    
  strcpy(str2,mass[1]);    

  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
	putchar('\n');
  str_devide(str1,mass1);
  str_devide(str2,mass2);

  
  printf("mass1[0] = %s\n", mass1[0]);
  printf("mass2[0] = %s\n", mass2[0]); 
	putchar('\n');
	
	pid_t pid1 = fork();

	if (pid1== 0) { // Дочерний процесс - пишет в pipe
  	close(pipefd[0]); 
        
    // Перенаправляем stdout в pipe
    dup2(pipefd[1], 1);
    close(pipefd[1]);
        
    execvp(mass1[0], mass1);	
  	} 
		
	pid_t pid2 = fork();

	if (pid2== 0) { 
    close(pipefd[1]); 
        
   
    dup2(pipefd[0], 0);
    close(pipefd[0]);
        
    execvp(mass2[0], mass2);	
  	} 
			
	close(pipefd[0]);
  close(pipefd[1]);
        
  waitpid(pid1, NULL, 0);
  waitpid(pid2, NULL, 0); 	
	}
	return 0;
}