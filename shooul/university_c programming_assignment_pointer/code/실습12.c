#include <stdio.h>
void main() {

	int sum = 0;
	int score[] = { 89,98,76 };

	printf("점자       주소       저장값\n");

	for (int i = 0; i < 3; ++i) {
		printf("%2d %10p %6d\n", i, (score + i), *(score + i));
	}
	printf("\n");

	printf("score : %p\n", score);
	printf("&score[0] : %p\n", &score[0]);



	return 0;
}