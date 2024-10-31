//5-1
//List5-3を書きかえて、先頭から順に0、1、2、3、4を代入するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("List5-3を書きかえて、先頭から順に0、1、2、3、4を代入するプログラムを作成せよ。");

	int x[5];
	for (int i = 0; i < 5; i++) {
		x[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}