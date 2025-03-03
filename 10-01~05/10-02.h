#pragma once
#include <stdio.h>

//西暦*y念*m月*d日の日付を、"前の日" あるいは "次の日" の日付に
// 更新する関数を作成せよ.

/*
* decriment_date "前の日" の日付に更新する関数
* incriment_date "前の日" の日付に更新する関数
* \param y 年
* \param m 月
* \param d 日
*/

#define tukisu 12

int uru(int* y) {
	if (*y % 4 == 0 && (*y % 100 != 0 || *y % 400 == 0)) return 1;
	else return 0;
}

void decrement_date(int *y, int *m, int *d) {

	int nichisu[tukisu] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (*d != 1) {//2日以上なら日を-1する

		(*d)--;

		return;
	}

	//閏年なら2月の日数を29にする

	if (uru(y)) {

		nichisu[1] = 29;

	}

	//1日の時

	if (*m == 1) {

		(*y)--;

	}

	//*m = tukisu - ((tukisu + 1 - *m) % tukisu);
	*m = (*m == 1) ? tukisu : (*m - 1);

	*d = nichisu[*m - 1];

}

void increment_date(int *y, int *m, int *d) {

	int nichisu[tukisu] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	//閏年なら2月の日数を29にする

	if (uru(y)) {

		nichisu[1] = 29;

	}

	if (*d != nichisu[*m - 1]) {//月の最終日以外なら日数を1増やす

		(*d)++;

		return;

	}

	//月の最終日の時

	if (*m == tukisu) {

		(*y)++;

	}

	*m = (*m == tukisu)? 1 : (*m + 1);

	*d = 1;

}

void call1002() {

	int yeardec, monthdec, datedec;

	int yearinc, monthinc, dateinc;

	printf("西暦の日付の数字部分を空白区切りで入力してください.\n");

	scanf_s("%d", &yeardec);

	scanf_s("%d", &monthdec);

	scanf_s("%d", &datedec);

	yearinc = yeardec;

	monthinc = monthdec;

	dateinc = datedec;

	decrement_date(&yeardec, &monthdec, &datedec);

	increment_date(&yearinc, &monthinc, &dateinc);

	printf("前の日は, %d年%d月%d日です.\n", yeardec, monthdec, datedec);

	printf("次の日は, %d年%d月%d日です.\n", yearinc, monthinc, dateinc);

}