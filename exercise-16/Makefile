CFLAGS = -Wall -g

ex16: ex16.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex16
	valgrind ./$^ 

.PHONY: clean
clean:
	rm -f ex16
