//5-4
//List5-8の配列の要素数をオブジェクト形式マクロで定義するように変更したプログラムを作成せよ。

#include <stdio.h>

#define NUMBER 10

int main(void)
{
	puts("List5-8の配列の要素数をオブジェクト形式マクロで定義するように変更したプログラムを作成せよ。");

	int x[NUMBER];

	for (int i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
	}
	for (int i = 0; i < NUMBER / 2; i++) {
		int t = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = t;
	}
	
	puts("反転しました。");
	for (int i = 0; i < NUMBER; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}