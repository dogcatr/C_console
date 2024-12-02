#pragma once
#include <stdio.h>
#include "7-03.h"//bit関連の関数
#define rep(i,n) for(int i = 0; i < n; i++)

//符号無し整数xの第posビットを、セットした値を返す関数set、リセットした値を返す関数reset、反転した値を返す関数inverseを作成せよ.

unsigned set(unsigned x, int pos) {
	return x | (1U << pos);
}

unsigned reset(unsigned x, int pos) {
	return x & (~(1U << pos));
}

unsigned inverse(unsigned x, int pos) {
	return x ^ (1U << pos);
}

void call0704() {
	unsigned x;
	int pos;
	printf("正の整数xを入力: "); scanf_s("%u", &x);
	printf("正の整数posを入力: "); scanf_s("%d", &pos);

	printf("2進数で");
	print_bits(x);

	printf("pos: %dの位置をset ", pos);
	print_bits(set(x, pos));

	printf("pos: %dの位置をreset ", pos);
	print_bits(reset(x, pos));

	printf("pos: %dの位置をinverse ", pos);
	print_bits(inverse(x, pos));
}