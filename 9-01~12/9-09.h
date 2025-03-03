#pragma once
#include <stdio.h>

#define CNUM 128

//文字列sの文字の並びを反転する関数を作成せよ.
//void rev_string(char s[]);
//たとえば, sに"SEC"を受け取ったら, その配列を"CES"に更新すること

/*
* 文字列sの文字の並びを反転する関数
* \param s 文字列
*/

void rev_string(char s[]) {

	int n = 0;

	while (s[n]!='\0') n++;

	for (int i = 0; i < n/2; i++) {

		char temp = s[i];

		s[i] = s[n - 1 - i];

		s[n - 1 - i] = temp;

	}

	for (int i = 0; i < n; i++) {

		putchar(s[i]);

	}

}

void call0909() {

	printf("文字列を入力してください. 逆に表示します.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	rev_string(s);

}