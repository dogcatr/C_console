#pragma once
#include <stdio.h>

//List7-12とList7-13のそれぞれを書きかえて、0.0から1.0まで0.01ずつ増やした値すべての累計を求めるプログラムを作成せよ.

void call0711() {
	printf("List7-12を変更したもの\n");
	float y = 0.00;
	for (float x = 0.0; x <= 1.0; x += 0.01) {
		y += x;
		printf("sum = %f\n", y);
	}

	printf("List7-13を変更したもの\n");

	float z;
	y = 0.00;
	for (int i = 0; i <= 100; i++) {
		z = i / 100.0;
		y += z;
		printf("sum = %f\n", y);
	}

	printf("List7-12の方は正確な値より大きい時と小さい時がある.\n");
	printf("List7-13の方は正確な値より大きい時だけがある.\n");
}