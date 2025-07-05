BIN := main
SRC := add.c sub.c div.c mul.c
OBJ := $(SRC:.c=.o)
HDR := header.h
CC := gcc 
CFLAGS := -Wall -Wextra -g
LDFLAGS := 

.PHONY: all clean

all: libcalc.a $(BIN)

libcalc.a: $(OBJ)
		ar rcs $@ $^

$(BIN): main.c libcalc.a
	$(CC) $(CFLAGS) $< -o $@ -L. -lcalc

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN) *.o *.a