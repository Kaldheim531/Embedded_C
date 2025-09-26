SRC := sigwait.c second_program.c
OBJ := $(SRC:.c=.o)
BIN := sigwait sender
CC := gcc 
HDR := header.h

all: sender sigwait

$(OBJ): $(HDR)
	$(CC)  -c $(SRC)

sender: second_program.o
	$(CC) second_program.o -o sender

block: sigwait.o
	$(CC) sigwait.o -o block
	

clean:
	rm -rf  *.o $(BIN)
.PHONY: all clean