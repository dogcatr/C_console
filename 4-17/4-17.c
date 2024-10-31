//4-17
//1からnまでの整数値の2乗値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;
	printf("nの値: "); scanf_s("%d", &no);

	for (int i = 1; i <= no; i++) {
		printf("%dの2乗値は%d\n", i, i * i);
	}

	return 0;
}