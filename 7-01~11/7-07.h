#pragma once
#include <stdio.h>

//float型の変数とdouble型の変数とlong double型の変数にキーボードから数値を読み込んで、その値を表示するプログラムを作成せよ.

void call0707() {
	float a;
	double b;
	long double c;
	printf("floatの数値を入力: "); scanf_s("%f", &a);
	printf("doubleの数値を入力: "); scanf_s("%lf", &b);
	printf("long doubleの数値を入力: "); scanf_s("%Lf", &c);
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %Lf\n", c);
}