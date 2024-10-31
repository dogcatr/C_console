//4-13
//1からnまでの総和を求めるプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int n;

	printf("nの値: ");
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1から%dまでの総和は%dです。", n, sum);

	return 0;
}