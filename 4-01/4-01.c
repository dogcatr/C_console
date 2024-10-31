//4-1
//読み込んだ整数値の符号を判定するList3-9を入力・表示を好きなだけ繰り返せるように変更したプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int no;

	int retry;

	do {
		printf("整数を入力せよ: ");
		scanf_s("%d", &no);//入力

		if (no == 0)//判定
			puts("その数は0です。");
		else if (no > 0)
			puts("その数は正です。");
		else
			puts("その数は負です。");

		printf("まだ?<Yes・・・0/No・・・9>: ");//繰り返すか聞く
		scanf_s("%d", &retry);
	} while (retry == 0);

	return 0;
}