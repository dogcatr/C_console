//4-23
//右上側が直角となる二等辺三角形を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int len;
	puts("右上直角二等辺三角形を表示します。");
	printf("短辺: "); scanf_s("%d", &len);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			putchar(' ');
		}
		for (int j = len; i < j; j--) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}