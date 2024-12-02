#pragma once
#include <stdio.h>
#include <math.h>

//実数値の面積をよみこんで、その面積をもつ正方形の一辺の長さを求めるプログラムを作成せよ.

void call0709() {
	double x;
	printf("正の実数値を入力: "); scanf_s("%lf", &x);
	printf("面積%fの正方形の一辺の長さは%f\n", x, sqrt(x));
}