#pragma once
#include <stdio.h>

#define CNUM 128

//文字列s内のすべての数字文字を除去する関数を作成せよ.

/*
* 文字列s内のすべての数字文字を除去する関数
* \param s 文字列
*/

void del_digit(char s[]) {

	char scopy[CNUM];

	int j = 0;

	for (int i = 0; s[i]; i++) {

		if (s[i] - '0' < 0 || 9 < s[i] - '0') {
			
			scopy[j++] = s[i];

		}

	}

	scopy[j] = '\0';

	for (int i = 0; i<j+1; i++) {

		s[i] = scopy[i];

	}

}

void call0910() {

	printf("文字列を入力してください. 逆に表示します.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	del_digit(s);

	printf("%s\n", s);

}