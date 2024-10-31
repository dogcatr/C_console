//3-9
//演習3-6のプログラムを、if文でなく条件演算子を用いて書きかえよ。

#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("三つの整数を入力せよ。");
	printf("整数１: "); scanf_s("%d", &n1);
	printf("整数２: "); scanf_s("%d", &n2);
	printf("整数３: "); scanf_s("%d", &n3);

	int minnum;
	minnum = n1 < n2 ? n1 : n2;//min(n1, n2)
	minnum = minnum < n3 ? minnum : n3;//min( min(n1, n2), n3)

	printf("最小値は%dです。", minnum);
}