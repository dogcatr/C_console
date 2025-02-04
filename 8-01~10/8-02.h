#pragma once
#include <stdio.h>

#define max(x, y) (((x) > (y))? (x) : (y))

//maxのマクロを利用して、四つの値a, b, c, dの最大値を求める.
//二つの式がどのように展開されるか示し、考察を加えよ.

void call0802() {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("max(max(a, b), max(c, d))とmax(max(max(a, b), c), d)の違い\n");

	printf("max(max(1, 2), max(3, 4)) = %d\n", max(max(a, b), max(c, d)));

	printf("一度の展開で(((max(1, 2)) > (max(3, 4)))? (max(1, 2)) : (max(3, 4)))となる.\n");

	printf("maxの展開回数が5回\n");

	printf("max(max(max(1, 2), 3), 4) = %d\n", max(max(max(a, b), c), d));

	printf("一度の展開で(((max(max(1, 2), 3)) > (4))? (max(max(1, 2), 3)) : (4))となる.\n");

	printf("maxの展開回数が7回\n");
}