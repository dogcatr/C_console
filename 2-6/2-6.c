﻿//2-6
//身長を整数値として読み込んで、標準体重を実数で表示するプログラムを作成せよ。小数点以下を1桁だけ表示せよ。

#include <stdio.h>

int main(void)
{
	int x;
	printf("身長を入力せよ: "); scanf_s("%d", &x);

	printf("標準体重は%.1fです。", (x - 100) * 0.9);
}