//4-12
//正の整数値を読み込んで、その桁数を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ: ");
	scanf_s("%d", &no);

	printf("%dは", no);

	int cnt = 0;
	while (0 < no) {
		cnt++;
		no /= 10;
	}

	printf("%d桁です。", cnt);

	return 0;
}