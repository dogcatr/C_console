//3-8
//List3-16のプログラムを、条件演算子でなくif文を用いて書きかえよ。

#include <stdio.h>

int main(void)
{
	int n1, n2;
	
	puts("二つの整数を入力せよ。");
	printf("整数１: "); scanf_s("%d", &n1);
	printf("整数２: "); scanf_s("%d", &n2);

	int dif;
	if (n1 < n2) dif = n2 - n1;//差
	else dif = n1 - n2;

	printf("それらの差は%dです。", dif);
}