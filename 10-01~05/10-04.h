#pragma once
#include <stdio.h>

//要素型がint型で要素数がnの配列を受け取って、全要素に添字と同じ値を代入する関数set_idxを作成せよ.

/*
* 要素型がint型で要素数がnの配列を受け取って、全要素に添字と同じ値を代入する関数
* \param v 配列を指すポインタ
* \param n 配列の要素数
*/

#define n_max 100

void set_idx(int *v, int n) {

	for (int i = 0; i < n; i++) {

		v[i] = i;

	}

}

void call1004() {

	int n;

	printf("0からn-1まで並べた配列を作成します. nに入れる%d以下の整数を入力してください. : ", n_max);

	scanf_s("%d", &n);

	int v[n_max];

	set_idx(v, n);

	printf("配列の値を出力します.\n");

	for (int i = 0; i < n; i++) {

		printf("%d ", v[i]);

	}

	printf("\n");

}