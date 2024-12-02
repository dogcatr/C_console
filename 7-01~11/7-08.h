#pragma once
#include <stdio.h>

//3種類の浮動小数点型の大きさをsizeof演算子で求めて表示するプログラムを作成せよ.

void call0708() {
	printf("sizeof(float) = %zu\n", sizeof(float));
	printf("sizeof(double) = %zu\n", sizeof(double));
	printf("sizeof(long double) = %zu\n", sizeof(long double));
}