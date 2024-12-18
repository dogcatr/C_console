﻿//3-10
//三つの整数値を読み込んで、それらの値がすべて等しければ『三つの値は等しいです。』と、どれか二つの値が等しければ『二つの値が等しいです。』と、そうでなければ『三つの値は異なります。』と表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("三つの整数を入力せよ。");
	printf("整数A: "); scanf_s("%d", &a);
	printf("整数B: "); scanf_s("%d", &b);
	printf("整数C: "); scanf_s("%d", &c);

	int x = a - b == 0 ? 1 : 0;
	int y = b - c == 0 ? 1 : 0;
	int z = c - a == 0 ? 1 : 0;

	if (x == 1 && y == 1) {
		printf("三つの値は等しいです。");//二組が等しければ３つが等しい。
	}
	else if (x == 1 || y == 1 || z == 1) {
		printf("二つの値が等しいです。");//1組が等しい。
	}
	else {
		printf("三つの値は異なります。");//1組も等しくない。
	}
}