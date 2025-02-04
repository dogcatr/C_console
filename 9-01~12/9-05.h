#pragma once
#include <stdio.h>

#define CNUM 128

//文字列sの中に、文字cが含まれていれば、その添字を返し、含まれ
// ていなければ-1を返す関数を作成せよ。

/*
* 文字cの添字を返す関数
* \param s 文字列
* \param c 文字
*/

int str_char(const char s[], int c) {

	int len = 0;

	while (s[len] != '\0') {

		if (s[len] == c) {

			return len;
		}

		len++;

	}

	return -1;

}

void call0905() {

	char s[CNUM];

	char c;

	printf("%d文字以内の文字列と文字を入力してください。\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("c : "); scanf_s("%*c%c", &c, 1);

	printf("%s中の%cの添字は、%d\n", s, c, str_char(s, c));

}