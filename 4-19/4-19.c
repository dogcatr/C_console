//4-19
//読み込んだ整数値の全約数を表示するList4-17を書きかえて、約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;
	printf("整数値: "); scanf_s("%d", &no);

	int cnt = 0;
	for (int i = 1; i <= no; i++) {
		if (no % i == 0) {
			printf("%d\n", i);
			cnt++;
		}
	}

	printf("約数は%d個です。", cnt);

	return 0;
}