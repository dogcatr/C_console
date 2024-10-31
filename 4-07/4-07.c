//4-7
//読み込まれた整数値以下である正の2のべき乗の数を順に表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	int i = 2;

	while (i <= no) {//表示したい数がnoを超えていないか
		printf("%d ", i);
		i *= 2;
	}

	if (i == 2) {
		printf("\n");
	}

	return 0;
}