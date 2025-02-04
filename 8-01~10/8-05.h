#pragma once
#include <stdio.h>

//性別や季節などを表す列挙隊を自由に定義し、
//それを用いたプログラムを作成せよ.

enum season {Spring, Summer, Fall, Winter, Invalid};

enum season select(void) {
	
	enum season tmp;

	do {
		printf("0・・・春 1・・・夏 2・・・秋 3・・・冬 4・・・終了");
		scanf_s("%d", &tmp);
	} while (tmp < Spring || tmp > Invalid);

	return tmp;
}

void call0805() {
	
	enum season selected;

	do {
		switch (selected = select()) {
		case Spring: printf("春はあけぼの\n"); break;
		case Summer: printf("夏は暑い\n"); break;
		case Fall: printf("秋は紅葉\n"); break;
		case Winter: printf("冬は寒い\n"); break;
		}
	} while (selected != Invalid);
}