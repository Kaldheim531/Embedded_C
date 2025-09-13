#include "header.h"

int main(){

	mkfifo(PATH_FIFO, 0666);
	sleep(1);
	int fd = open(PATH_FIFO, O_WRONLY);
	 
	write(fd,"Hi!",sizeof("Hi!"));
	close(fd);
	unlink(PATH_FIFO);
	return 0;

}	