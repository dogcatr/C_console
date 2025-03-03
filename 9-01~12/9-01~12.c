//#include
#include <stdio.h>
#include "9-01.h"
#include "9-02.h"
#include "9-03.h"
#include "9-04.h"
#include "9-05.h"
#include "9-06.h"
#include "9-07.h"
#include "9-08.h"
#include "9-09.h"
#include "9-10.h"
#include "9-11.h"
#include "9-12.h"

#define MinExerciseNumber 1//演習の番号
#define MaxExerciseNumber 12

int main(void)
{
	int c;//continue
	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {

		case 1:call0901(); break;
		case 2:call0902(); break;
		case 3:call0903(); break;
		case 4:call0904(); break;
		case 5:call0905(); break;
		case 6:call0906(); break;
		case 7:call0907(); break;
		case 8:call0908(); break;
		case 9:call0909(); break;
		case 10:call0910(); break;
		case 11:call0911(); break;
		case 12:call0912(); break;

		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);
}