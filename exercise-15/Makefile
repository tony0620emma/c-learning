CFLAGS = -Wall -g

ex15: ex15.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex15
	valgrind ./$^ 

.PHONY: clean
clean:
	rm -f ex15
