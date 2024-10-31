//3-1
//二つの整数値を読み込んで、後者が前者の約数であれば『BはAの約数です。』と表示し、そうでなければ『BはAの約数ではありません。』と表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("二つの整数を入力せよ。");

	int a, b;
	scanf_s("%d", &a);//入力
	scanf_s("%d", &b);//入力

	if (b) {
		if (a % b) {
			printf("%dは%dの約数ではありません。", b, a);
		}
		else {
			printf("%dは%dの約数です。", b, a);
		}
	}
	else {
		if (a) {
			printf("%dは%dの約数ではありません。", b, a);
		}
		else {
			printf("%dは%dの約数です。", b, a);
		}
	}
}