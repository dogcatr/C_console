//4-15
//身長と体重の対応表を表示するプログラムを作成せよ。表示する身長の範囲は整数値として読み込んで、求めた標準体重は小数部を2桁表示すること。

#include <stdio.h>

int main(void)
{
	int n, m, l;
	printf("何cmから: "); scanf_s("%d", &n);
	printf("何cmまで: "); scanf_s("%d", &m);
	printf("何cmごと: "); scanf_s("%d", &l);

	for (int i = n; i <= m; i += l) {
		printf("%dcm %4.2fkg\n", i, (float)(i - 100) * 0.9);
	}

	return 0;
}