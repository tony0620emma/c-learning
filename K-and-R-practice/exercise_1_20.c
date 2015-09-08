#include <stdio.h>
#define MAX_LENGTH 1000

main()
{
	int c;
	int index = 0;
	int i;
	char line[MAX_LENGTH];	

	while ((c = getchar()) != '>') {
		if (c == '\t') {
			for (i = 0; i < 3; i++)
				line[index++] = ' ';
		}
		
		else if (c == '\n') {
			line[index] = '\0';
			printf("%s\n", line);
			for (i = index; i >= 0; i--)
				line[i] = 0;
			index = 0;
		}
		else
			line[index++] = c;
				
	}
}
