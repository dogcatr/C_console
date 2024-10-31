//4-10
//読み込んだ整数値の個数だけ*をお縦に連続して表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数: ");
	scanf_s("%d", &no);

	while (0 < no--) {
		printf("*\n");
	}

	return 0;
}