#include <stdio.h>

main()
{
	int c, n;

	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == '\n' || c == ' ')
			n++;
		printf("%c\n", c);
	}
	printf("n = %d\n", n);
}
