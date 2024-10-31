//1-8
//読み込んだ二つの整数値の積を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("二つの整数を入力してください。");

	int x, y;

	printf("整数n1: "); scanf_s("%d", &x);//入力
	printf("整数n2: "); scanf_s("%d", &y);

	printf("それらの積は%dです。", x * y);//積
}