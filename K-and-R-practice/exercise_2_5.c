#include <stdio.h>

int any(const char *s1, char *s2) 
{
	int first_position = 0;
	char *start;
	while (*s1++) {
		start = s2;
		while (*start++) {
			if (*s1 == *start)
				return first_position;
		}
		++first_position;
	}

	return -1;
}

int main(void)
{
	char s1[] = "tonyyanxuan";
	char s2[] = "emma";

	printf("first position : %d\n", any(s1, s2));

	return 0;
}
