OBJ := main.o functions.o
SRC := main.c functions.c
BIN := main
HDR := functions.h
CC := gcc

$(BIN) : $(OBJ)
	gcc $(OBJ) -o $(BIN) 

$(OBJ) : $(SRC) $(HDR)
	$(CC) $(SRC) -c  


clean :
	rm -rf  *.o  $(BIN)