#pragma once
#include <stdio.h>

#define CNUM 128

//文字列を空文字列にする関数を作成せよ。

/*
* 文字列を空文字列にする関数
* \param s 文字列
*/

void null_string(char s[]) {

	s[0] = '\0';

}

void call0904() {

	char s[CNUM];

	printf("%d文字以内の文字列を入力してください。\n s : ", CNUM);

	scanf_s("%s", s, CNUM);

	null_string(s);

	printf("空文字列にすると, s : %s\n", s);

}