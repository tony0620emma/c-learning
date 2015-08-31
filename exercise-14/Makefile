CFLAGS = -Wall -g

ex12: ex14.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex14
	valgrind ./$^ 

.PHONY: clean
clean:
	rm -f ex14
