//4-18
//整数値を読み込んで、その数だけ'*'を表示するプログラムを作成せよ。ただし、5表示するごとに改行すること。

#include <stdio.h>

int main(void)
{
	int no;
	printf("何個*を表示しますか: "); scanf_s("%d", &no);
	
	while (4 < no) {//noを5で割ったときの商だけ繰り返す。
		puts("*****");
		no -= 5;
	}
	for (int i = 0; i < no; i++) {
		putchar('*');
	}
	if (0 < no) putchar('\n');

	return 0;
}