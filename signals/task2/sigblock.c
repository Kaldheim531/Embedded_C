#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
int main() {
	sigset_t set;
	int ret;

	sigemptyset(&set);
	sigaddset(&set,SIGINT);
	ret = sigprocmask(SIG_BLOCK, &set, NULL);
	printf("Мой PID: %d\n", getpid());
	if (ret < 0) {
		perror("Can't set signal handler!\n");
		exit(EXIT_FAILURE);
	}
	while(1){
		sleep(1);
	}
	
	exit(EXIT_SUCCESS);
	return 0; 
}