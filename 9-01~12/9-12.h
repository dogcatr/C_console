#pragma once
#include <stdio.h>

#define ARYLEN 5
#define CNUM 128

//受け取った文字列の配列に格納されているn個の文字列の文字の並びを反転する関数を作成せよ.

/*
* 受け取った文字列の配列に格納されているn個の文字列の文字の並びを反転する関数
* \param strs 文字列の配列
* \param n
*/

void rev_strings(char strs[][128], int n) {

	for (int i = 0; i < n; i++) {

		int m = 0;

		while (strs[i][m] != '\0') m++;

		for (int j = 0; j < m / 2; j++) {

			char temp = strs[i][j];

			strs[i][j] = strs[i][m - 1 - j];

			strs[i][m - 1 - j] = temp;

		}

	}

	for (int i = 0; i < n; i++) {

		printf("%s\n", strs[i]);

	}

}

void call0912() {

	printf("5以下の整数を入力してください. : ");

	int n;

	scanf_s("%d", &n);

	printf("文字列を複数個(%d個以下)入力してください. : ", n);

	char strs[ARYLEN][CNUM];

	for (int i = 0; i < n; i++) {

		scanf_s("%s", strs[i], CNUM);

	}

	rev_strings(strs, n);

	printf("反転すると\n");

}