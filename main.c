#include <stdio.h>

FILE *image;
char c;

int main (int argc, char **argv) {

	if (argc < 2 || argc > 3) { // Error if too many or too litte arguments
		printf("ERROR: Invalid num of arguments\n");
		return 1;
	}

	image = fopen(argv[1],"r"); //open given image file

	while (c != EOF) {
		c = getc(image);
		
		switch (c) {
			case '0':
				printf("\033[30m\u2587"); // Translate 0 to black
				break;
			case 'B':
				printf("\033[34m\u2587"); // Translate B to blue
				break;
			case 'C':
				printf("\033[36m\u2587"); // Translate C to cyan
				break;
			case 'D':
				printf("\033[39m\u2587"); // Translate D to default color
				break;
			case 'G':
				printf("\033[32m\u2587"); // Translate G to green
				break;
			case 'L':
				printf("\033[37m\u2587"); // Translate L to light grey
				break;
			case 'M':
				printf("\033[35m\u2587"); // Translate M to magenta
				break;
			case 'N':
				printf("\n"); // Translate N to newline
				break;
			case 'O':
				printf("\033[33m\u2587"); // Translate O to orange
				break;
			case 'R':
				printf("\033[31m\u2587"); // Translate R to red
				break;
			case '\n':
				break; // Ignore newline in file
			case EOF:
				break; // Ignore end of file
			default:
				printf("ERROR: character %c is not a valid character",c);
				return 1;
		}
	}

	fclose(image); //close given image file
	return 0;
}
