//4-5
//List4-7のプログラムを、次のように書きかえたプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	int i = 1;

	while (i <= no) {//1からnoまで表示
		printf("%d ", i++);
	}

	if (i == 1) {
		printf("\n");
	}

	return 0;
}