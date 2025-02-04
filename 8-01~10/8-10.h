#pragma once
#include <stdio.h>

//標準入力から読み込まれた数字文字をカウントする.

/*
* 標準入力から読み込まれた数字文字をカウントする関数
* \param ch 入力を読み取る
* \param cnt 数字文字をカウントする
*/

void call0810() {

	int ch;//入力を読み取るch

	int cnt[10] = { 0 };

	printf("数値を入力してください:\n");
	printf("Ctrl + Zと入力した後, Enterを押してください.\n");

	while ((ch = getchar()) != EOF) {

		if (ch >= '0' && ch <= '9') {

			cnt[ch - '0']++;

		}

	}

	puts("数字文字の出現回数");

	for (int i = 0; i < 10; i++) {

		printf("'%d' : ", i);

		for (int j = 0; j < cnt[i]; j++) {

			putchar('*');
		}

		putchar('\n');

	}

}