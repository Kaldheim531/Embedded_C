CC := gcc
BIN :=server client
CFLAGS = -Wall -Wextra 
HEADER := header.h

all: $(BIN)

server: server.c $(HEADER)
	$(CC) $(CFLAGS) server.c -o server

client: client.c $(HEADER)
	$(CC) $(CFLAGS) client.c -o client

clean:
	rm -f $(BIN) *.o

run: all
	./server & ./client

.PHONY: all clean run