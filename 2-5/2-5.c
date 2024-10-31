//2-5
//二つの整数値を読み込んで、前者の値が後者の何%であるかを実数で表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("整数a: "); scanf_s("%d", &a);
	printf("整数b: "); scanf_s("%d", &b);

	printf("aの値はbの%f%%です。", (double)(100 * a) / b);
}