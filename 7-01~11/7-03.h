#pragma once
#include <stdio.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define ONEBYTE 8

//符号無し整数xの全ビットを右にnビット開店した値を返す関数rrotateと、左にnビット回転した値を返す関数lrotateを作成せよ.

//n右シフトで消えるnビットは, sizeof(x)-n左シフトで得られる.
//右シフトした値と左シフトした値を合わせるとローテートした値が得られる.
unsigned rrotate(unsigned x, int n) {
	unsigned y = x << (sizeof(x) * ONEBYTE - n);
	return (x >> n) | y;
}

unsigned lrotate(unsigned x, int n) {
	unsigned y = x >> (sizeof(x) * ONEBYTE - n);
	return (x << n) | y;
}

int count_bits(unsigned x) {
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void) {
	return count_bits(~0U);
}

void print_bits(unsigned x) {
	for (int i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
	putchar('\n');
}

void call0703() {
	unsigned x;
	int n;
	printf("正の整数を入力: "); scanf_s("%u", &x);//%oと%dで値が変わる
	printf("ローテートする回数を入力: "); scanf_s("%d", &n);

	printf("%u\n", x);
	print_bits(x);
	putchar('\n');
	print_bits(rrotate(x, n));
	putchar('\n');
	print_bits(lrotate(x, n));
	putchar('\n');
	printf("右に%dローテート: %u\n", n, rrotate(x, n));
	printf("左に%dローテート: %u\n", n, lrotate(x, n));
	//printf("%zu", sizeof(x));
}