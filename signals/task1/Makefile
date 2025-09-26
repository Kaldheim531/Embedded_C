SRC := first_program.c second_program.c
OBJ := $(SRC:.c=.o)
BIN := receiver sender
CC := gcc 
HDR := header.h

all: sender receiver

$(OBJ): $(HDR)
	$(CC)  -c $(SRC)

sender: second_program.o
	$(CC) second_program.o -o sender

receiver:first_program.o
	$(CC) first_program.o -o receiver
	

clean:
	rm -rf  *.o $(BIN)
.PHONY: all clean