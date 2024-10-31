//4-22
//List4-19のプログラムを書きかえて、横長の長方形を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int side1, side2;
	do {
		puts("横長の長方形を作ります。");
		printf("一辺(その1)"); scanf_s("%d", &side1);
		printf("一辺(その2)"); scanf_s("%d", &side2);
		if (side1 <= 0 || side2 <= 0) {
			puts("正の整数を入力してください。");
		}
	} while (side1 <= 0 || side2 <= 0);

	if (side1 > side2) {
		int no = side1;
		side1 = side2;
		side2 = no;
	}
	for (int i = 0; i < side1; i++) {
		for (int j = 0; j < side2; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}