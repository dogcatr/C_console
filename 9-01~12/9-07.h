#pragma once
#include <stdio.h>

#define CNUM 128

//文字列sをn回だけ連続して表示する関数を作成せよ。

/*
* 文字列sを表示
*/

void put_string(const char s[]) {

	int i = 0;

	while (s[i]) {

		putchar(s[i++]);

	}

}

/*
* 文字列sをn回だけ連続して表示する関数
* \param s 文字列
* \param n 正の整数
*/

void put_stringn(const char s[], int n) {

	for (int i = 0; i < n; i++) {
		
		put_string(s);

	}

	putchar('\n');

}

void call0907() {

	char s[CNUM];

	int n;

	printf("%d文字以内の文字列と正の整数を入力してください。\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("n : "); scanf_s("%d", &n, 1);

	printf("%sを%d回繰り返すと,\n", s, n);

	put_stringn(s, n);

}