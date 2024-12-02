#pragma once
#include <stdio.h>
#include "7-03.h"//bit関連の関数
#include "7-04.h"
#define rep(i,n) for(int i = 0; i < n; i++)

//符号無し整数xの第posビットから第pos+n-1ビットまでのn個のビットを、セットした値を返す関数set_n、リセットした値を返す関数reset_n、反転した値を返す関数inverse_nを作成せよ.

unsigned set_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = set(x, pos + i);
	}
	return x;
}

unsigned reset_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = reset(x, pos + i);
	}
	return x;
}

unsigned inverse_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = inverse(x, pos + i);
	}
	return x;
}

void call0705() {
	unsigned x;
	int pos;
	int n;
	printf("正の整数xを入力: "); scanf_s("%u", &x);
	printf("正の整数posを入力: "); scanf_s("%d", &pos);
	printf("正の整数nを入力: "); scanf_s("%d", &n);

	printf("2進数で");
	print_bits(x);

	printf("第%d ~ %dビットをset ", pos, pos + n - 1);
	print_bits(set_n(x, pos, n));

	printf("第%d ~ %dビットをreset ", pos, pos + n - 1);
	print_bits(reset_n(x, pos, n));

	printf("第%d ~ %dビットをinverse ", pos, pos + n - 1);
	print_bits(inverse_n(x, pos, n));
}