#pragma once
#include <stdio.h>

//標準入力に現れた行数をカウントするプログラムを作成せよ.

/*
* 入力された文章の行数を出力する関数
* \param ch 入力を読み取る
* \param cnt 改行をカウントする
*/

void call0809() {

	int ch;//入力を読み取るch

	int cnt = 0;//改行をカウントするcnt

	printf("文章の入力と改行を複数回行ってください. 行数を出力します. 最後はCtrl + Zと入力した後, Enterを押してください.\n");

	while (1) {

		if((ch = getchar()) == '\n') cnt++;

		if (ch == EOF) break;

	}

	printf("行数:%d\n", --cnt);

	printf("終了\n");

}