#include <stdio.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define MinExerciseNumber 12//演習の番号
#define MaxExerciseNumber 15

#define NUM 10

//配列の表示
void printf_ary(const int v[], int n)
{
	printf("{ ");
	for (int i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("}\n");
}


//6-12
//4行3列の行列aと3行4列の行列bの積を、4行4列の行列cに格納する関数を作成せよ。
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	rep(i, 4) {
		rep(j, 4) {
			c[i][j] = 0;
			rep(k, 3)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}
void call0612(void)
{
	printf("4行3列の行列a :\n");
	int a[4][3] = {
		{3, 5, 5,},
		{9, 8 ,1,},
		{9, 9, 2,},
		{2, -3, -5},
	};
	rep(i, 4) {
		printf_ary(a[i], 3);
	}

	printf("3行4列の行列b :\n");
	int b[3][4] = {
		{-3, 4, -6, -3,},
		{2, 6, 3, -1,},
		{3, -6, 5, 9,},
	};
	rep(i, 3) {
		printf_ary(b[i], 4);
	}

	printf("4行4列の行列c :\n");
	int c[4][4];
	mat_mul(a, b, c);
	rep(i, 4) {
		printf_ary(c[i], 4);
	}
}

//6-13
//2回分の点数を3次元配列に格納するようにList6-16を書きかえたプログラムを作成せよ。
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	rep(i, 4) {
		rep(j, 3) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void call0613(void)
{
	int tensu1[4][3] = {
		{91,63,78,},
		{67,72,46,},
		{89,34,53,},
		{32,54,34,},
	};
	int tensu2[4][3] = {
		{97,67,82,},
		{73,43,46,},
		{97,56,21,},
		{85,46,35,},
	};
	int sum[4][3];
	mat_add(tensu1, tensu2, sum);
	printf("1回目の点数\n");
	rep(i, 4)
		printf_ary(tensu1[i], 3);
	printf("2回目の点数\n");
	rep(i, 4)
		printf_ary(tensu2[i], 3);
	printf("合計点\n");
	rep(i, 4)
		printf_ary(sum[i], 3);
}

//6-14
//静的記憶域期間が与えられたdouble型配列の全要素が0.0が初期化されることを確認するプログラムを作成せよ。
void call0614(void)
{
	printf("静的記憶域期間が与えられたdouble型配列の全要素が0.0が初期化されることを確認する。\n");
	static double z[NUM];
	printf("{ ");
	rep(i, NUM) {
		printf("%f ", z[i]);
	}
	printf("}\n");
}

//6-15
//呼び出された回数を表示する関数put_countを作成せよ。
void put_count(void)
{
	static int cnt = 0;
	printf("put_count : %d回目\n", ++cnt);
}
void call0615(void)
{
	printf("呼び出された回数を表示する関数put_countを呼び出す回数を入力してください : ");
	int n;
	scanf_s("%d", &n);
	rep(i, n) {
		put_count();
	}
}

int main(void)
{
	int c;//continue

	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 12: call0612(); break;
		case 13: call0613(); break;
		case 14: call0614(); break;
		case 15: call0615(); break;
		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);

	return 0;
}
