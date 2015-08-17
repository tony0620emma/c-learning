CFLAGS = -Wall -g

ex10: ex10.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex10
	valgrind ./ex10

clean:
	rm -f ex10
