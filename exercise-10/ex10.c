#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// ..
	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};

	argv[1] = states[2];

	for(i = 1; i < argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}

	// make my own array of strings
	int num_states = 5;

	for(i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}

