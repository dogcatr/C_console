//5-9
//List5-13を書きかえて、配列aの要素の並びを逆順にしたものをbにコピーするプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("List5-13を書きかえて、配列aの要素の並びを逆順にしたものをbにコピーするプログラムを作成せよ。");

	int a[5];
	int b[5];

	for (int i = 0; i < 5; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++) {
		b[i] = a[4 - i];
	}

	puts("  a    b  ");
	puts("----------");

	for (int i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}

	return 0;
}