BIN := main
SRC := add.c sub.c div.c mul.c
OBJ := $(SRC:.c=.o)
HDR := header.h
CC := gcc
CFLAGS := -Wall -Wextra -g
LDFLAGS := -L. -lcalc
LIB := libcalc.so

.PHONY: all clean

all: $(LIB) $(BIN)

$(LIB): $(OBJ)
	$(CC) -shared $(OBJ) -o $@

$(BIN): main.c $(LIB)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	rm -rf $(BIN) *.o *.so


run: all
	LD_LIBRARY_PATH=. ./$(BIN)