#include "header.h"

void sig_handler(int sig_num, siginfo_t *info, void *args) { // обработчик сигнала
  printf("Получен сигнал SIGUSR1 от процесса %d\n", info->si_pid);
}

int main(void) {
	struct sigaction handler;
	sigset_t set;
	int ret;

	sigemptyset(&set); // зануляем маску
	sigaddset(&set, SIGUSR1); // добавляем SIGUSR1 который будем переопределять

	handler.sa_sigaction = sig_handler;// какая функция будет вызываться
	handler.sa_mask = set; // какие сигналы будут блокироваться  на время вызова
	ret = sigaction(SIGUSR1, &handler, NULL);// для сигнала SIGUSR1 испльзуй строкуру handler
 
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