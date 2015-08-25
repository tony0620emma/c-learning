CFLAGS = -Wall -g

ex12: ex13.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex13
	valgrind ./$^ Tony

.PHONY: clean
clean:
	rm -f ex13
