#include <stdio.h>

#include <Windows.h>//6-6で使用するsleepのため

#define MinExerciseNumber 5//演習の番号
#define MaxExerciseNumber 7

//6-5
//1からnまでの全整数の和を求めて返却する関数を作成せよ。
int sumup(int n)
{
	int z = 0;
	while (n) {
		z += n--;
	}
	return z;
}
void call0605()
{
	printf("一つの正の整数を入力してください。1からその整数までの和を返します。\n");
	int z;
	printf("整数%d : ", 1); scanf_s("%d", &z);
	printf("1から整数1までの和 : %d\n", sumup(z));
}

//6-6
//警報をn回連続して発する関数を作成せよ。
void alert(int n)
{
	while (n--)
	{
		putchar('\a');
		Sleep(1.5 * 1000);
	}
}
void call0606()
{
	printf("一つの正の整数nを入力してください。n回警報を発します。\n");
	int z;
	printf("整数%d : ", 1); scanf_s("%d", &z);
	alert(z);
}

//6-7
//画面に『こんにちは。』と表示する関数を作成せよ。
void  hello(void)
{
	printf("こんにちは。\n");
}

int main(void)
{
	int c;//continue

	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 5: call0605(); break;
		case 6: call0606(); break;
		case 7: hello(); break;
		default: printf("5～7以外の値が入力されました。\n");
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);

	return 0;
}