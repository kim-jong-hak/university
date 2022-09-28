#include <stdio.h>
void main() {
	for (int y = 0; y < 5; ++y) {
		for (int x = 0; x <= y; ++x) {
			printf("*");
		}
		printf("\n");
	}
}