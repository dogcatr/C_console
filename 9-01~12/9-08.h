#pragma once
#include <stdio.h>

#define CNUM 128

//文字列を後ろから逆に表示する関数を作成せよ.
//void put_stringr(const char s[]);
//たとえば, sに"SEC"を受け取ったら, その配列を"CES"と表示すること

/*
* 文字列を後ろから逆に表示する関数
* \param s 文字列
*/

void put_stringr(const char s[]) {

	int n = 0;

	while (s[n]) n++;

	for (int i = n - 1; 0 <= i; i--) {

		putchar(s[i]);

	}

}

void call0908() {

	printf("文字列を入力してください. 逆に表示します.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	put_stringr(s);

}