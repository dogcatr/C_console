#pragma once
#include <stdio.h>

//異なるn個の整数からr個の整数を取り出す組み合わせの数nCrを求める関数を作成せよ。

/*
* nCrを返す関数
* \param n 整数の個数
* \param r n個から選ぶ整数の個数
*/

int combination(int n, int r) {
	
	//nCr = (n-1)C(r-1) + (n-1)Cr
	//nC0 = nCn = 1
	//nC1 = n
	if (r == 0 || r == n) {
		return 1;
	}
	else if (r == 1) {
		return n;
	}
	
	return combination(n - 1, r - 1) + combination(n - 1, r);
}

void call0807() {
	int n, r;

	printf("nCrを計算します\n");
	printf("n : "); scanf_s("%d", &n);
	printf("r : "); scanf_s("%d", &r);

	printf("nCr = %d\n", combination(n, r));
}