#pragma once
#include <stdio.h>

//二つの整数値xとyの最大公約数を
//ユークリッドの互除法を用いて求める関数を作成せよ.

int gcd(int x, int y) {

	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

void call0808() {
	
	printf("正の整数を二つ入力してください\n");
	
	int x, y;
	
	printf("x : "); scanf_s("%d", &x);
	printf("y : "); scanf_s("%d", &y);

	printf("xとyの最大公約数 : %d\n", gcd(x, y));
}