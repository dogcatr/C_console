//1-6
//右に示すように、読み込んだ整数値から7を減じた値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int x;
	printf("整数を入力してください: ");
	scanf_s("%d", &x);//入力
	printf("%dから7を減じると%dです。", x, x - 7);//入力から-7して表示
}