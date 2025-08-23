#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
int main() {
	pid_t child_pid1,child_pid2,child_pid3,child_pid4,child_pid5;
	int status;
	child_pid1 = fork();
	if ( child_pid1 == 0){
		printf("Child pid1 = %d\nChild ppid1 = %d\n", getpid(),getppid());
		child_pid3 = fork();
	if ( child_pid3 == 0){
		printf("Child pid3 = %d\nChild ppid3 = %d\n", getpid(),getppid());
		exit(0);
	}
	child_pid4 = fork();
	if ( child_pid4 == 0){
		printf("Child pid4 = %d\nChild ppid4 = %d\n", getpid(),getppid());
		exit(0);
	}
	wait(&status);
  wait(&status);
  exit(0);

	}
	child_pid2 = fork();
	if( child_pid2 == 0){
		printf("Child pid2 = %d\nChild ppid2 = %d\n", getpid(),getppid());
		child_pid5 = fork();
	if ( child_pid5 == 0){
		printf("Child pid5 = %d\nChild ppid5 = %d\n", getpid(),getppid());
		exit(0);
	}
	wait(&status);
  exit(0);
	}
	wait(&status);
  wait(&status);
	return 0;
}