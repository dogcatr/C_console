﻿//1-5
//右に示すように、読み込んだ整数値に13を加えた値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int x;
	printf("整数を入力してください: ");
	scanf_s("%d", &x);//入力
	printf("%dに13を加えると%dです。", x, x + 13);//入力に13足して表示
}