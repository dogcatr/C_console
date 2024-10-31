//4-4
//List4-6のプログラムを、次のように書きかえたプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	while (no >= 1) {
		printf("%d ", no--);
	}
	if (no == 1) {
		printf("\n");
	}

	return 0;
}