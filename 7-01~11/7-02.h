#pragma once
#include <stdio.h>

//符号無し整数を左右にシフトした値が、上位ビットがはじき出されない限り、2のべき乗での乗算や除算の演算結果と一致することを確認するプログラムを作成せよ.

void call0702() {
	int n;
	printf("正の整数を入力: "); scanf_s("%d", &n);
	printf("右に1つシフトした値: %d\n", n >> 1);
	printf("2で割った値: %d\n", n / 2);
	printf("左に1つシフトした値: %d\n", n << 1);
	printf("2倍した値: %d\n", 2 * n);
}