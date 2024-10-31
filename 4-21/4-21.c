//4-21
//読み込んだ整数を辺の長さとしてもつ正方形を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;
	do {
		printf("正方形を作ります。\n");
		printf("何段ですか: "); scanf_s("%d", &no);
		if (no <= 0) {
			puts("\a正の整数を入力してください。");
		}
	} while (no <= 0);

	for (int i = 0; i < no; i++) {
		for (int j = 0; j < no; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}