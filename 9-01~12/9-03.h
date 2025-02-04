#pragma once
#include <stdio.h>

#define NUM 4//文字列の個数

#define CNUM 128//文字列の最大長

//List9-7を次のように書きかえたプログラムを作成せよ。
//・文字列の個数を3よりも大きな値とし、その値をオブジェクト形式マクロとして定義する。
//・最初のfor文では、"$$$$$"を読み込んだ時点で読み込みを中断・終了する。
//・2番目のfor文では、"$$$$$"より前に入力された全文字列を表示する。

/*
* 文字列の最初が$$$$$であるか判定する関数
*/

int dolcheck(char c[]) {

	if (c[0] == '$' && c[1] == '$' && c[2] == '$' && c[3] == '$' && c[4] == '$' && c[5]=='\0') {

		return 1;

	}

	return 0;

}

/*
* 文字列の配列を読み込んで表示し、"$$$$$"が入力されたら読み込みを中断する関数
*/

void call0903() {

	char s[NUM][CNUM];

	int lm = NUM;//$$$$$が出るまでの行数

	printf("文字列を複数入力してください。$$$$$と入力すると終了します。\n");

	for (int i = 0; i < NUM; i++) {

		printf("s[%d] : ", i);

		scanf_s("%s", s[i], CNUM);

		if (dolcheck(s[i])) {

			lm = i;

			break;

		}

	}

	for (int i = 0; i < lm; i++) {

		printf("s[%d]=\"%s\"\n", i, s[i]);

	}

}