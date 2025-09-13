#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int main(){
	int p[2];
	pipe(p);
	int s;
	char buffer[10];
	pid_t pid;
	pid = fork();
	if(pid == 0){
		close(p[1]);
		read(p[0],buffer,sizeof(buffer));
		puts(buffer);
		exit(5);
	} else{
		
		close(p[0]);
		write(p[1],"Hi!",strlen("Hi!")+1);
		wait(&s);
	}

	return 0;

}	