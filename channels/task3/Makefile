SRC := main.c functions.c
OBJ := $(SRC:.c=.o)
BIN := main
HDR := functions.h
CC := gcc

$(BIN) : $(OBJ)
	$(CC) $(OBJ) -o $(BIN) 

$(OBJ) : $(SRC) $(HDR)
	$(CC) $(SRC) -c  


clean :
	rm -rf  *.o  $(BIN)