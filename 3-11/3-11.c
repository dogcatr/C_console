﻿//3-11
//二つの整数値を読み込んで、それらの値の差が10以下であれば『それらの差は10以下です。』と、そうでなければ『それらの差は11以上です。』と表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("二つの整数を入力せよ。");
	int a, b;
	printf("整数A: "); scanf_s("%d", &a);
	printf("整数B: "); scanf_s("%d", &b);

	if (-10 <= a - b && a - b <= 10) {//差が10以下
		printf("それらの差は10以下です。\n");
	}
	else {
		printf("それらの差は11以上です。\n");
	}
}