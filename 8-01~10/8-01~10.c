//#include
#include <stdio.h>
#include "8-01.h"
#include "8-02.h"
#include "8-03.h"
#include "8-04.h"
#include "8-05.h"
#include "8-06.h"
#include "8-07.h"
#include "8-08.h"
#include "8-09.h"
#include "8-10.h"

#define MinExerciseNumber 1//演習の番号
#define MaxExerciseNumber 10

int main(void)
{
	int c;//continue
	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {

		case 1:call0801(); break;
		case 2:call0802(); break;
		case 3:call0803(); break;
		case 4:call0804(); break;
		case 5:call0805(); break;
		case 6:call0806(); break;
		case 7:call0807(); break;
		case 8:call0808(); break;
		case 9:call0809(); break;
		case 10:call0810(); break;

		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);
}