//4-25
//読み込んだ整数の段数をもつ下向き数字ピラミッドを表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int len;
	do {
		puts("下向き数字ピラミッドを作ります。");
		printf("何段ですか: "); scanf_s("%d", &len);
		if (len <= 0)
			puts("正の整数を入力してください。");
	} while (len <= 0);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			putchar(' ');
		}
		for (int j = 0; j < 2 * (len - i) - 1; j++) {
			printf("%d", (i + 1) % 10);
		}
		putchar('\n');
	}

	return 0;
}