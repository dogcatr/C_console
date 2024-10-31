//2-1
//二つの整数値を読み込んで、前者の値が後者の何%であるかを表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("二つの整数を入力せよ。");

	int x, y;

	printf("整数x: "); scanf_s("%d", &x);//入力
	printf("整数y: "); scanf_s("%d", &y);

	printf("xの値はyの%d%%です。", 100 * x / y);//計算
}