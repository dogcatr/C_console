//4-8
//読み込んだ値が1未満であれば改行文字を出力しないようにList4-8を書きかえたプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	while (no-- > 0) {
		putchar('*');
	}

	if (no == -1) {
		printf("\n");
	}

	return 0;
}