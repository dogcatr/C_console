#pragma once
#include <stdio.h>

//List10-11の関数ary_setを、art_set(&a[2],2,99)と呼び出すとどうなるか. 実行するとともに, その結果を検討せよ.

/*
* 配列vの先頭n個の要素にvalを代入
* \param v 配列を指すポインタ
* \param n 要素数
* \param val 要素に代入する値
*/

void ary_set(int v[], int n, int val) {

	for (int i = 0; i < n; i++) {

		v[i] = val;

	}

}

void call1005() {

	printf("ary_setをary_set(&a[2], 2, 99)で呼び出すと, &a[2]が配列の最初の要素を指すポインタとして扱われ, a[2]=a[3]=99となる. \n");

	int a[] = { 1,2,3,4,5 };

	ary_set(&a[2], 2, 99);

	for (int i = 0; i < 5; i++) {

		printf("a[%d] = %d\n", i, a[i]);

	}

}