//4-14
//1234567890を繰り返し表示するプログラムを作成せよ。読み込まれた整数値の個数だけ数字を表示すること。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	int m = 1234567890;//繰り返す数字

	for (int i = 0; i < no; i++) {//no回ループ
		printf("%d", m);
	}
	if (0 < no) printf("\n");

	return 0;
}