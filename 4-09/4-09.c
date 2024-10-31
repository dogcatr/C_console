//4-9
//読み込んだ整数値の個数だけ+と-を交互に表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;
	printf("正の整数: "); scanf_s("%d", &no);

	while (0 < no--) {
		putchar('+');
		if (0 < no--) {
			putchar('-');
		}
	}

	return 0;
}