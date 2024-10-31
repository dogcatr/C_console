//1-9
//読み込んだ三つの整数値の和を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("三つの整数を入力してください。");

	int n1, n2, n3;

	printf("整数n1: "); scanf_s("%d", &n1);//入力
	printf("整数n2: "); scanf_s("%d", &n2);
	printf("整数n3: "); scanf_s("%d", &n3);

	printf("それらの和は%dです。", n1 + n2 + n3);//和
}