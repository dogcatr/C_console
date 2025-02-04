#pragma once
#include <stdio.h>

//二つの値xとyの差を求める関数形式マクロを定義せよ.

#define diff(x, y) x - y

void call0801() {
	printf("二つの値xとyの差を求める関数diffの引数(整数)を入力:\n");
	int x, y;

	printf("x: "); scanf_s("%d", &x);

	printf("y: "); scanf_s("%d", &y);

	printf("diff(%d, %d) = %d\n", x, y, diff(x, y));
}