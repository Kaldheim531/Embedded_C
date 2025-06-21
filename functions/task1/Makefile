BIN := main
SRC := print_all.c add.c del.c seek.c exit.c main.c
OBJ := $(SRC:.c=.o)
HDR := func.h
CC := gcc

 .PHONY: main

 $(BIN): $(OBJ)
	$(CC) $^ -o $@

$(OBJ): $(SRC)
	$(CC)  $(SRC) -c
 
$(BIN): $(HDR)

clean:
	rm -f $(BIN) *.o