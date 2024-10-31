//4-3
//負の値を読み込んだときに改行文字を出力しないように、List4-5のプログラムを書きかえよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;
	}

	if (no == 0) {
		printf("\n");
	}

	return 0;
}