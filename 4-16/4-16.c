//4-16
//整数値を読み込んで、その整数以下の奇数を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;
	printf("整数値: "); scanf_s("%d", &no);

	for (int i = 1; i <= no; i += 2) {
		printf("%d ", i);
	}
	putchar('\n');

	return 0;
}