#include <stdio.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define MinExerciseNumber 8//演習の番号
#define MaxExerciseNumber 11

//

int main(void)
{
	int c;//continue

	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 1: break;
		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);

	return 0;
}