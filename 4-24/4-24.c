//4-24
//読み込んだ整数の段数をもつピラミッドを表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int len;
	do {
		puts("ピラミッドを作ります。");
		printf("何段ですか: "); scanf_s("%d", &len);
		if (len <= 0)
			puts("正の整数を入力してください。");
	} while (len <= 0);

	for (int i = 0; i < len; i++) {
		for (int j = len - i - 1; 0 < j; j--) {
			putchar(' ');
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}