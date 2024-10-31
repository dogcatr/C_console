//3-6
//三つの整数値を読み込んで、その最小値を求めて表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("三つの整数を入力せよ。");
	printf("整数１: "); scanf_s("%d", &n1);
	printf("整数２: "); scanf_s("%d", &n2);
	printf("整数３: "); scanf_s("%d", &n3);

	int minnum = n1;
	if (minnum > n2)
		minnum = n2;
	if (minnum > n3)
		minnum = n3;

	printf("最小値は%dです。", minnum);
}