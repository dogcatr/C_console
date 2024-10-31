//5-2
//List5-3を書きかえて、先頭から順に5、4、3、2、1を代入するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("List5-3を書きかえて、先頭から順に5、4、3、2、1を代入するプログラムを作成せよ。");

	int x[5];
	for (int i = 0; i < 5; i++) {
		x[i] = 5 - i;
	}
	for (int i = 0; i < 5; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}