BIN := main
SRC := print.c add.c delete.c seek.c  main.c free.c exit.c create.c
OBJ := $(SRC:.c=.o)
HDR := list.h
CC := gcc 
CFLAGS := -Wall -Wextra -g
LDFLAGS := 

.PHONY: clean main

$(BIN): $(OBJ) 
	$(CC)  $^ -o $@ $(LDFLAGS)

%.o : %.c
	$(CC) $(CFLAGS)  $^ -c

$(BIN): $(HDR)


clean:
	rm -rf $(BIN) *.o