#include <stdio.h>
void main() {
	
	for (int y = 0; y < 26; ++y) {
		for (int x = 0; x <= y; ++x) {
			printf("%c", 65 + x);
		}
		printf("\n");
	}
	
	
	
	return 0;
}