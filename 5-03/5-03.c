//5-3
//List5-5を書きかえて、先頭から順に5、4、3、2、1を代入するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	puts("List5-5を書きかえて、先頭から順に5、4、3、2、1を代入するプログラムを作成せよ。");

	int x[5] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}