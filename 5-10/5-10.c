//5-10
//4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ。");

	int a[4][3];
	int b[3][4];

	puts("4行3列の行列の要素12個を整数で入力してください。(1行目から順に)");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}

	puts("3行4列の行列の要素12個を整数で入力してください。(1行目から順に)");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}

	int c[4][4] = { {0,0,0,0} };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d", c[i][j]);
		}
		putchar('\n');
	}

	return 0;
}