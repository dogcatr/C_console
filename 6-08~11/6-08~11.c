#include <stdio.h>

#define MinExerciseNumber 8//演習の番号
#define MaxExerciseNumber 11

#define NUMBER 100

//共通の関数
//min～maxの整数を一つ入力
int scanf_oneint(int min, int max)
{
	int n;
	do {
		printf("配列の要素数n(%d以上%d以下)を選んでください。 : ", min, max);
		scanf_s("%d", &n);
		if (n < min || max < n) {
			printf("1以上%d以下の整数を入力してください。\n", max);
		}
	} while (n < min || max < n);
	return n;
}

//n個の要素を入力
void scanf_ary(int v[], int n)
{
	printf("配列の要素を%d個入力してください。 : ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &v[i]);
	}
}

//配列の表示
void printf_ary(int v[], int n)
{
	printf("{ ");
	for (int i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("}\n");
}


//6-8
//要素数がnであるintの配列vの最小値を返す関数を作成せよ。
int min_of(const int v[], int n)
{
	int min = v[0];
	for (int i = 0; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}

void call0608(void)
{
	int n;
	int v[NUMBER];
	n = scanf_oneint(1, NUMBER);	//要素数
	scanf_ary(v, n);				//配列の要素

	printf("最小値は%dです。\n", min_of(v, n));
}

//6-9
//要素数がnであるintの配列vの要素の並びを反転する関数を作成せよ。
void rev_intary(int v[], int n)
{
	int n_half = n / 2;
	for (int i = 0; i < n_half; i++) {
		int t = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = t;
	}
}

void call0609(void)
{
	int n;
	int v[NUMBER];
	n = scanf_oneint(1, NUMBER);	//要素数
	scanf_ary(v, n);				//配列の要素

	rev_intary(v, n);				//配列の反転
	
	printf_ary(v, n);				//配列の表示
}

//6-10
//要素がnであるintの配列v2の並びを反転したものを配列v1に格納する関数を作成せよ。
void intary_rcpy(int v1[], const int v2[], int n)
{
	for (int i = 0; i < n; i++) {
		v1[i] = v2[i];				//v2をv1にコピー
	}
	rev_intary(v1, n);				//配列の反転

	printf_ary(v1, n);				//配列の表示
}

void call0610(void)
{
	int n;
	int v1[NUMBER];
	int v2[NUMBER];
	n = scanf_oneint(1, NUMBER);	//要素数
	scanf_ary(v2, n);				//配列の要素
	intary_rcpy(v1, v2, n);
}

//6-11
//要素数nの配列v内のkeyと等しい全要素の添字を配列idxに格納する関数search_idxを作成せよ。
int search_idx(const int v[], int idx[], int key, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (v[i] == key)
			idx[cnt++] = i;
	return cnt;
}

void call0611(void)
{
	int n;
	int key;
	int v[NUMBER];
	int idx[NUMBER];
	
	n = scanf_oneint(1, NUMBER);		//要素数
	printf("配列にいくつあるか調べたい整数を入力してください。 : ");
	scanf_s("%d", &key);
	scanf_ary(v, n);					//vに要素を入力
	int cnt = search_idx(v, idx, key, n);
	printf("%dがある配列の添字は", key);
	printf_ary(idx, cnt);
	printf("%dは%d個あります。\n", key, cnt);
}

int main(void)
{
	int c;//continue

	do {
		int num;
		printf("試したい演習問題の番号を入力してください。(%d～%d) : ", MinExerciseNumber, MaxExerciseNumber);
		scanf_s("%d", &num);

		switch (num) {
		case 8: call0608(); break;
		case 9: call0609(); break;
		case 10: call0610(); break;
		case 11: call0611(); break;
		default: printf("%d～%d以外の値が入力されました。\n", MinExerciseNumber, MaxExerciseNumber);
		}
		printf("もう一度試しますか?(No: 0, Yes: 1) : ");
		scanf_s("%d", &c);
	} while (c == 1);

	return 0;
}