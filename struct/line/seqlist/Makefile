CC = gcc
CFLAG = -O0 -g -Wall

test:test.c seqlist.c
	$(CC) $(CFLAGS) -o $@ $^
.PHONY:clean
clean:
	rm -rf test
