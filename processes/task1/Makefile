OBJ := main.o
SRC := main.c
BIN := main
CC := gcc

$(BIN) : $(OBJ)
	gcc $(OBJ) -o $(BIN)

$(OBJ) : $(SRC)
	$(CC) $(SRC) -c

clean :
	rm -rf  *.o -r main