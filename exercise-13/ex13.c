#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("ERROR! You need only one argument!\n");
		
		return 1;
	}
	
	int i = 0;
	char letter;
	for(i = 0; (letter = argv[1][i]) != '\0'; i++){
		if(letter >= 'A' && letter <= 'Z')
			letter -= 'A' - 'a';

		switch(letter){
			case 'a':
				printf("%d: 'A'\n", i);
				break;

			case 'e':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
				printf("%d: 'I'\n", i);
				break;
				
			case 'o':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
				printf("%d: 'U'\n", i);
				break;

			default:
				printf("%d: %c is not a vowel\n", i, argv[1][i]);
		}
	}

	return 0;
}
