//3-7
//四つの整数値を読み込んで、その最大値を求めて表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;

	puts("四つの整数を入力せよ。");
	printf("整数１: "); scanf_s("%d", &n1);
	printf("整数２: "); scanf_s("%d", &n2);
	printf("整数３: "); scanf_s("%d", &n3);
	printf("整数４: "); scanf_s("%d", &n4);

	int maxnum = n1;//最大値になる
	if (maxnum < n2) maxnum = n2;
	if (maxnum < n3) maxnum = n3;
	if (maxnum < n4) maxnum = n4;

	printf("最大値は%dです。\n", maxnum);
}