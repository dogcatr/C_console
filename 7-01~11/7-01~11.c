#include "7-01.h"
#include "7-02.h"
#include "7-03.h"
#include "7-04.h"
#include "7-05.h"
#include "7-06.h"
#include "7-07.h"
#include "7-08.h"
#include "7-09.h"
#include "7-10.h"
#include "7-11.h"
#include <stdio.h>
#define MinExerciseNumber 1//演習の番号
#define MaxExerciseNumber 11

int main(void)
{
	int c;//continue
	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 1: call0701(); break;
		case 2: call0702(); break;
		case 3: call0703(); break;
		case 4: call0704(); break;
		case 5: call0705(); break;
		case 6: call0706(); break;
		case 7: call0707(); break;
		case 8: call0708(); break;
		case 9: call0709(); break;
		case 10: call0710(); break;
		case 11: call0711(); break;
		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);
}