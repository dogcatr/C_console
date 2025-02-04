#pragma once
#include <stdio.h>

//再帰呼出しを用いずに、関数factorialを実現せよ.

/**
* 正の整数nを入力すると、n!を表示する
*/

void call0806() {

	//正の整数
	int n;
	
	printf("正の整数nを入力 : "); scanf_s("%d", &n);
	
	//n!
	int m = 1;
	for (int i = 1; i <= n; i++) {
		m *= i;
	}

	printf("%d! = %d\n", n, m);
}