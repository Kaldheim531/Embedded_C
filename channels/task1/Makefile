BIN := main
OBJ := main.o
SRC := main.c
CC := gcc

$(BIN): $(OBJ)
	 $(CC) $(OBJ) -o $(BIN)

$(OBJ): $(SRC)
	$(CC) $(SRC) -c

clean:
	rm -rf *.o $(BIN)