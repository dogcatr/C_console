//4-6
//読み込まれた整数値以下である正の偶数を順に表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	int i = 1;

	while (2 * i <= no) {//表示したい数がnoを超えていないか
		printf("%d ", 2 * i);
		i++;
	}

	if (i == 1) {
		printf("\n");
	}

	return 0;
}