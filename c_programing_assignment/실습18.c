#include <stdio.h>
void main() {
	int y = 26;
	int run = 25;
	int run_1 = 0;
	int cc = 0;
	for (int x = 65; x <= 90; x++) 
	{
		printf("%c    ", x);
		for (int xx = 0; xx < (x - 65); xx++) {
			printf(" ");
		}
		for (int y_1 = 0; y_1 <= (y / 3); y_1++) {

			for (int yy = 0; yy < 3; yy++) {
				if (run_1 > run) {
					break;
				}
				printf("%c", (x + y_1));
				run_1++;
				cc = y_1;
			}

		}
		run--;
		run_1 = 0;
		printf("\n");
	}



	return 0;
}