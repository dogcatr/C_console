//2-4
//整数定数、浮動小数点定数、int型の変数、double型の変数を、掛けたり割ったりするなど、いろいろな演算を行うプログラムを作成し、本文に示した規則を確認せよ。

#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4;//int型の変数とdouble型の変数を掛け、int型の変数に代入

	x1 = 2 * 3;
	x2 = 2.0 * 3.0;
	x3 = 2.0 * 3;
	x4 = 2 * 3.0;

	printf("x1 = %d\n", x1);
	printf("x2 = %d\n", x2);
	printf("x3 = %d\n", x3);
	printf("x4 = %d\n", x4);

	double y1, y2, y3, y4;//int型の変数とdouble型の変数を掛け、double型の変数に代入

	y1 = 2 * 3;
	y2 = 2.0 * 3.0;
	y3 = 2.0 * 3;
	y4 = 2 * 3.0;

	printf("y1 = %f\n", y1);
	printf("y2 = %f\n", y2);
	printf("y3 = %f\n", y3);
	printf("y4 = %f\n", y4);

	int z1, z2, z3, z4;//int型の変数とdouble型の変数で割り算をし、int型の変数に代入

	z1 = 2 / 3;
	z2 = 2.0 / 3.0;
	z3 = 2.0 / 3;
	z4 = 2 / 3.0;

	printf("z1 = %d\n", z1);
	printf("z2 = %d\n", z2);
	printf("z3 = %d\n", z3);
	printf("z4 = %d\n", z4);

	double w1, w2, w3, w4;//int型の変数とdouble型の変数で割り算をし、double型の変数に代入

	w1 = 2 / 3;
	w2 = 2.0 / 3.0;
	w3 = 2.0 / 3;
	w4 = 2 / 3.0;

	printf("w1 = %f\n", w1);
	printf("w2 = %f\n", w2);
	printf("w3 = %f\n", w3);
	printf("w4 = %f\n", w4);
}