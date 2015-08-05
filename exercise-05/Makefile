CFLAGS=-Wall -g

ex5: ex5.c
	$(CC) $(CFLAGS) -o $@ $^

Valgrind: ex5
	valgrind ./ex5

clean:
	rm -f ex5
