//4-2
//二つの整数値を読み込んで、小さいほうの数以上で大きい方の数以下の全整数を加えた値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int a, b;
	puts("二つの整数を入力せよ。");
	printf("整数a: "); scanf_s("%d", &a);
	printf("整数b: "); scanf_s("%d", &b);

	int start_a = a < b ? a : b;//小さいほう
	int end_b = a < b ? b : a;//大きいほう

	int sum = 0;
	int r = start_a;

	do {
		sum = sum + r;//小さいほうの数以上で大きいほうの数以下の数
		r = r + 1;
	} while (r <= end_b);//足す予定の数が大きいほうの数を超えたら終了

	printf("%d以上%d以下の全整数の和は%dです。", start_a, end_b, sum);

	return 0;
}