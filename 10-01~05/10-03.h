#pragma once
#include <stdio.h>

//ポインタn1, n2, n3が指す三つのint型整数を昇順にソートする関数を作成せよ.

/*
* ポインタn1, n2, n3が指す三つのint型整数を昇順にソートする関数
* \param n1, n2, n3 int型を指すポインタ
*/

void swap(int* x, int* y) {

	int temp = *x;

	*x = *y;

	*y = temp;

}

void sort3(int* n1, int* n2, int* n3) {

	if(*n1 > *n2){

		swap(n1, n2);

	}

	if (*n2 > *n3) {

		swap(n2, n3);

	}

}

void call1003() {

	int a, b, c;

	printf("二つの整数を入力せよ.\n");

	printf("整数a : "); scanf_s("%d", &a);

	printf("整数b : "); scanf_s("%d", &b);

	printf("整数c : "); scanf_s("%d", &c);

	sort3(&a, &b, &c);

	printf("昇順にソートしました.\n");

	printf("整数a : %d\n", a);

	printf("整数a : %d\n", b);

	printf("整数a : %d\n", c);

}