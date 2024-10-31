//3-4
//二つの整数値を読み込んで、それらの値が等しければ『AとBは等しいです。』と、Aのほうが大きければ『AはBより大きいです。』と、Bのほうが大きければ『AはBより小さいです。』と表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int A, B;
	
	printf("二つの整数を入力せよ。\n");
	printf("整数A: "); scanf_s("%d", &A);
	printf("整数B: "); scanf_s("%d", &B);

	if (A == B) {
		printf("AとBは等しいです。\n");
	}
	else if (A > B) {
		printf("AはBより大きいです。\n");
	}
	else {
		printf("AはBより小さいです。\n");
	}
}