//2-3
//読み込んだ実数値をそのまま表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	double x;
	
	printf("実数を入力せよ: ");
	scanf_s("%lf", &x);

	printf("あなたは%fと入力しましたね。\n", x);
}