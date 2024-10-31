//3-3
//整数値を読み込んで、その絶対値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力せよ: ");
	scanf_s("%d", &no);

	if (no > 0) {
		printf("絶対値は%dです。", no);
	}
	else {
		printf("絶対値は%dです。", -no);
	}
}