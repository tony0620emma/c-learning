CFLAGS = -Wall -g

ex17: ex17.c
	$(CC) $(CFLAGS) -o $@ $^

valgrind: ex17
	valgrind ./$^ 

.PHONY: clean
clean:
	rm -f ex17 *.txt
