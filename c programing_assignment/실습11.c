#include <stdio.h>
void main() {
	int run=1;
	for (int y = 0; y < 26; ++y) {
		for (int x = 0; x <= y; x++) {
			printf("%c", 65 + x);
		}
		printf("\n");
		for (int i = 0; i < run; i++) 
		{
			printf(" ");
		}

		run++;
	}
	return 0;
}