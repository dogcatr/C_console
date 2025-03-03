#pragma once
#include <stdio.h>

#define ARYLEN 5
#define CNUM 128

//List9-12を, 次のように書きかえたプログラムを作成せよ.
//文字列の個数を3よりも大きな値都市, その値をオブジェクト形式マクロとして定義する.
//文字列の文字数を6ではなく128とし, その値もオブジェクト形式マクロとして定義する.
//文字列の配列を読み込む関数を作成する. 演習9-3と同様に, "$$$$$"を読み込んだ時点で, 読み込みを中断する.
//"$$$$$"より前に入力された全文字列を表示する.

/*
* $$$$$が入力された時点で読み込みを中止し, 文字列の配列を表示する関数
* \param s 文字列の配列
*/

void put_strary(const char s[][CNUM], int n) {

	for (int i = 0; i < n; i++) {

		printf("s[%d] = \"%s\"\n", i, s[i]);

	}

}

int dollars(const char str[]) {

	int t = 1;

	char dol[] = "$$$$$";

	for (int i = 0; i < 6; i++) {

		if (str[i] != dol[i]) {

			t = 0;

			break;

		}

	}

	return t;

}

void call0911() {

	char cs[ARYLEN][CNUM];

	printf("文字列を複数入力してください.(%d個以下) : ", ARYLEN);

	int c = ARYLEN;//$$$$$が入力される前までの文字列の個数

	for (int i = 0; i < ARYLEN; i++) {

		scanf_s("%s", &cs[i], CNUM);

		if (dollars(cs[i])) {

			c = i;

			break;

		}

	}

	put_strary(cs, c);

}