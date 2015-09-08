#include <stdio.h>
#define start 1

main()
{
	int c;
	int word_length = 0;
	int histo[20];
	int i;
	for (i = 0; i < 20; i++)
		histo[i] = 0;
	
	while ((c = getchar()) != '>') {
		if (c >= '0' && c <= '9')
			word_length++;
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			word_length++;
		else if (c == '\t' || c == '\n' || c == ' ') {
			if (word_length <= 3)
				histo[0]++;
			else if (word_length >= 22)
				histo[19]++;
			else
				histo[word_length - 3]++;
			word_length = 0;
		}	
	}
	int j;
	/*for (i = 0; i < 20; i++) {
		printf("i = %2d : ", i);
		if (histo[i] >= 20) {
			for (j = 0; j < 20; j++)
				putchar('|');
			putchar('\n');
		}
		else {
			for (j = 0; j < histo[i]; j++)
				putchar('|');
			putchar('\n');
		}
	}*/
	
	int printing = 0;
	int k;
	for (i = 20; i >= 0; i--) {
		for (j = 0; j < 20; j++) {
			if (histo[j] >= i && (printing == start)) {
				printf("  -");
			}
			else if ((histo[j] >= i) && (printing == 0)) {
				printing = start;
				for (k = 0; k < j; k++) {
					printf("   ");
				}
				printf("  -");
			}
			else if (printing == start)
				printf("   ");
		}
		if (printing == start)
			printf("\n");
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		printf("%3d", i);
	}
	printf("\n");
}

