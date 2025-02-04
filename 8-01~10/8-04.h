#pragma once
#include <stdio.h>

//バブルソートの走査を末尾側からではなく、
//先頭側から行うように、List 8-5を書きかえた
//プログラムを作成せよ.

/**
* 昇順にソートする関数
* \param a ソートされる配列
* \param n 配列の長さ
*/

#define NUMBER 5

void rbsort(int a[], int n) {
	for (int i = n - 1; -1 < i; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void call0804() {

	int height[NUMBER];

	printf("%d人の身長を入力せよ。\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d番 : ", i + 1);
		scanf_s("%d", &height[i]);
	}

	rbsort(height, NUMBER);

	puts("昇順にソートしました。");
	for (int i = 0; i < NUMBER; i++)
		printf("%2d番 : %d\n", i + 1, height[i]);
}