#include "header.h"

int main() {
	sigset_t set;
	int ret;
	int sig_num;
	
	sigemptyset(&set);
	sigaddset(&set,SIGUSR1);
	ret = sigprocmask(SIG_BLOCK, &set, NULL);
	printf("Мой PID: %d\n", getpid());
	if (ret < 0) {
		perror("Can't set signal handler!\n");
		exit(EXIT_FAILURE);
	}
	while(1){
		sigwait(&set, &sig_num);
		printf("Sig number %d\n", sig_num);

	}
	
	exit(EXIT_SUCCESS);
	return 0; 
}