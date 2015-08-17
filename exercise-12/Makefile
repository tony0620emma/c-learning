CFLAGS = -Wall -g

ex12: ex12.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex12
	valgrind ./$^

clean:
	rm -f ex12
