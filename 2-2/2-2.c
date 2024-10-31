//2-2
//二つの整数値を読み込んで、その和と積を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("整数a: "); scanf_s("%d", &a);//入力
	printf("整数b: "); scanf_s("%d", &b);

	printf("それらの和は%dで積は%dです。", a + b, a * b);//和と積
}