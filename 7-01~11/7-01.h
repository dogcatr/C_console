#pragma once
#include <stdio.h>]

//各式の値を表示するプログラムを作成せよ.

void call0701() {
	int n = 1;
	printf("sizeof 1: %zu, ", sizeof 1);
	printf("sizeof (unsigned) - 1: %zu, ", sizeof(unsigned) - 1);
	printf("sizeof n + 2: %zu\n", sizeof n + 2);
	printf("sizeof + 1: %zu, ", sizeof + 1);
	printf("sizeof(double) - 1: %zu, ", sizeof(double) - 1);
	printf("sizeof(n + 2): %zu\n", sizeof(n + 2));
	printf("sizeof - 1: %zu, ", sizeof - 1);
	printf("sizeof((double) - 1): %zu, ", sizeof((double)-1));
	printf("sizeof(n + 2, 0): %zu\n", sizeof(n + 2.0));

	printf("左はすべてintのsize_t");
	printf("真ん中の上二つは型のsize_tの値から1引いたもの, 一番下はdouble型の-1のsize_tの値");
	printf("右の上はsizeof(n) + 2, 右の下はdoubleのsize_t");
}