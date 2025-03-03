//#include
#include <stdio.h>
#include "10-01.h"
#include "10-02.h"
#include "10-03.h"
#include "10-04.h"
#include "10-05.h"

#define MinExerciseNumber 1//演習の番号
#define MaxExerciseNumber 5

int main(void)
{
	int c;//continue
	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {

		case 1:call1001(); break;
		case 2:call1002(); break;
		case 3:call1003(); break;
		case 4:call1004(); break;
		case 5:call1005(); break;

		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);
}