#include <stdio.h>

#define MinExerciseNumber 1//演習の番号
#define MaxExerciseNumber 4

//6-1
//二つのint型整数の小さいほうの値を返す関数を作成せよ。
int min2(int a, int b)
{
	return a > b ? b : a;
}
//関数呼出し
void call0601()
{
	printf("二つの整数を入力してください。小さいほうの値を返します。\n");
	int z[2];
	for (int i = 0; i < 2; i++) {
		printf("整数%d : ", i + 1); scanf_s("%d", &z[i]);
	}
	printf("小さいほうの値 : %d\n", min2(z[0], z[1]));
}

//6-2
//三つのint型整数の最小値を返す関数を作成せよ。

int min3(int a, int b, int c) {
	return min2(a, min2(b, c));
}
//関数呼出し
void call0602()
{
	printf("三つの整数を入力してください。最小値を返します。\n");
	int z[3];
	for (int i = 0; i < 3; i++) {
		printf("整数%d : ", i + 1); scanf_s("%d", &z[i]);
	}
	printf("最小値 : %d\n", min2(z[0], min2(z[1], z[2])));
}

//6-3
//int型整数の3乗値を返す関数を作成せよ。

int cube(int x)
{
	return x * x * x;
}
//関数呼出し
void call0603()
{
	printf("一つの整数を入力してください。3乗値を返します。\n");
	int z;
	printf("整数%d : ", 1); scanf_s("%d", &z);
	printf("3乗値 : %d\n", cube(z));
}

//6-4
//int型整数の4乗値を返す関数を作成せよ。List6-3のsqrを呼び出すこと。

int sqr(int n)
{
	return n * n;
}
int pov4(int n)
{
	return sqr(sqr(n));
}
//関数呼出し
void call0604()
{
	printf("一つの整数を入力してください。4乗値を返します。\n");
	int z;
	printf("整数%d : ", 1); scanf_s("%d", &z);
	printf("4乗値 : %d\n", pov4(z));
}

int main(void)
{
	int c;//continue

	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 1: call0601(); break;
		case 2: call0602(); break;
		case 3: call0603(); break;
		case 4: call0604(); break;
		default: printf("1～4以外の値が入力されました。\n");
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);

	return 0;
}