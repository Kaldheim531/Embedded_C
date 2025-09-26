#include "header.h"


int main(){
	pid_t pid;
	printf("Input pid: ");
	char buf[256];
	fgets(buf,sizeof(buf),stdin);
	pid = strtol(buf, NULL, 10);
  printf("\nSignal %d sent successfully\n", pid);
  kill(pid, SIGUSR1);
	return 0;
}