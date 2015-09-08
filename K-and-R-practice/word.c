#include <stdio.h>
#define IN  0
#define OUT 0

main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == '\n' || c == ' ')
			printf("\n");
		else
			printf("%c", c);
	}
}
