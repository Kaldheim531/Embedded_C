SRC := sigblock.c second_program.c
OBJ := $(SRC:.c=.o)
BIN := block sender
CC := gcc 
HDR := header.h

all: sender block

$(OBJ): $(HDR)
	$(CC)  -c $(SRC)

sender: second_program.o
	$(CC) second_program.o -o sender

block: sigblock.o
	$(CC) sigblock.o -o block
	

clean:
	rm -rf  *.o $(BIN)
.PHONY: all clean