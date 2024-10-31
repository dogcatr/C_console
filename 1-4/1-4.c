//1-4
//int型変数の宣言に実数値の初期化子（たとえば3.14や5.7など）を与えるとどうなるだろうか。プログラムを作成して確認せよ。

#include <stdio.h>

int main(void)
{
	int x = 3.14;
	int y = 5.7;
	int z = -0.5;
	printf("xの値は%dです。\n", x);//int型変数を小数で初期化して表示
	printf("yの値は%dです。\n", y);
	printf("zの値は%dです。\n", z);
}