#pragma once
#include <stdio.h>

//List7-12のように、float型の変数を0.0から1.0まで0.01ずつ増やしていく様子と、List7-13のように、int型の変数を0から100までインクリメントした値を100.0で割った値を求める様子を、横に並べて表示するプログラムを作成せよ.

void call0710() {
	float y = 0.00;
	float x;

	for (int i = 0; i <= 100; i++) {
		x = i / 100.0;
		printf("x = %f, y = %f\n", y, x);
		y += 0.01;
	}
}