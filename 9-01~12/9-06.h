#pragma once
#include <stdio.h>

#define CNUM 128

//文字列sの中に、文字cが含まれている個数を返す関数を作成せよ。

/*
* 文字列sの中に、文字cが含まれている個数を返す関数
* \param s 文字列
* \param c 文字
*/

int str_chnum(const char s[], int c) {

	int i = 0;

	int cnt = 0;//cの個数

	while (s[i]) {

		if (s[i] == c) {

			cnt++;

		}

		i++;

	}

	return cnt;

}

void call0906() {

	char s[CNUM];

	char c;

	printf("%d文字以内の文字列と文字を入力してください。\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("c : "); scanf_s("%*c%c", &c, 1);

	printf("%s中の%cの個数は、%d\n", s, c, str_chnum(s, c));

}