#pragma once
#include <stdio.h>

//符号無し整数に対する算術演算ではオーバーフローが発生せず、上記の重要で示した結果となることを確認するプログラムを作成せよ.

void call0706() {
	unsigned x, y, z;
	x = 10000000000000;
	y = 10000000000000;
	z = x + y;
	printf("符号無し整数の計算\n 10000000000000 + 10000000000000 = は以下のようになる.\n");
	printf("x = %u, y = %u, z = x + y = %u\n", x, y, z);
}