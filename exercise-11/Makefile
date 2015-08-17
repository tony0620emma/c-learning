CFLAGS = -Wall -g

ex11: ex11.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex11
	valgrind ./$^

clean:
	rm -f ex11
