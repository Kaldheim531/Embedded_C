#include "header.h"

int main(){
	int fd = open(PATH_FIFO, O_RDONLY);
	
	char buffer[10];
	read(fd,buffer,sizeof(buffer));
	printf("%s\n",buffer);
	close(fd);

	return 0;

}	