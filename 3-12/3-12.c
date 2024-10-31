//3-12
//List3-4のプログラムを、if文でなくswitch文を用いて書きかえよ。

#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力せよ。: ");
	scanf_s("%d", &n);

	switch (n % 2) {
	case 1:puts("その数は奇数です。"); break;
	case 0:puts("その数は偶数です。"); break;
	}
}