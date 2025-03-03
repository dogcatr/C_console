#pragma once
#include <stdio.h>

//nの指す値が0より小さければ0に更新し、100より大きければ100に更新する関数adjust_pointを作成せよ。

/*
* nの指す値が0より小さければ0に更新し、100より大きければ100に更新する関数
* \param n intのポインタ
*/

void adjust_point(int* n) {
	if (*n < 0) {
		*n = 0;
	}
	else if (*n > 100) {
		*n = 100;
	}
}

void call1001() {

	printf("整数を入力してください. 0より小さい場合, 0を, 100より大きい場合, 100を, \nそれ以外の場合は, 入力した数値を表示します. : ");

	int s;

	scanf_s("%d", &s);

	int* n = &s;

	adjust_point(n);

	printf("数値 : %d\n", *n);

}