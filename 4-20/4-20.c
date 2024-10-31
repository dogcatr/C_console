//4-20
//縦横のタイトルが付いた九九の表を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	printf("   | ");
	for (int j = 1; j < 10; j++) {
		printf("%2d ", j);
	}
	putchar('\n');

	printf("---+-");
	for (int j = 1; j < 10; j++) {
		printf("---");
	}
	putchar('\n');

	for (int i = 1; i < 10; i++) {
		printf("%2d | ", i);
		for (int j = 1; j < 10; j++) {
			printf("%2d ", i * j);
		}
		putchar('\n');
	}

	return 0;
}