//5-11
//6人の2科目の点数を読み込んで、科目ごとの合計点と平均点、学生ごとの合計点と平均点を求めるプログラムを作成せよ。

#include <stdio.h>

#define NUMBER 6
#define KAMOKU 2

int main(void)
{
	puts("6人の2科目の点数を読み込んで、科目ごとの合計点と平均点、学生ごとの合計点と平均点を求めるプログラムを作成せよ。");

	int tensu[NUMBER][KAMOKU];
	printf("%d人の%d科目の点数を入力してください。\n", NUMBER, KAMOKU);
	printf("-----");
	for (int i = 0; i < KAMOKU; i++) {
		printf("科目%d-", i + 1);
	}
	putchar('\n');
	for (int i = 0; i < NUMBER; i++) {
		printf("%d人目:", i + 1);
		for (int j = 0; j < KAMOKU; j++) {
			scanf_s("%d", &tensu[i][j]);
		}
	}

	int goukeKamoku[KAMOKU] = { 0 };
	int goukeGakusei[NUMBER] = { 0 };


	for (int i = 0; i < KAMOKU; i++) {
		for (int j = 0; j < NUMBER; j++) {
			goukeKamoku[i] += tensu[j][i];
		}
	}

	for (int i = 0; i < NUMBER; i++) {
		for (int j = 0; j < KAMOKU; j++) {
			goukeGakusei[i] += tensu[i][j];
		}
	}

	puts("-----合計-平均");
	for (int i = 0; i < KAMOKU; i++) {
		printf("科目%d: %3d %3.3f\n", i + 1, goukeKamoku[i], (double)goukeKamoku[i] / (double)NUMBER);
	}

	for (int i = 0; i < NUMBER; i++) {
		printf("%d人目: %3d %3.3f\n", i + 1, goukeGakusei[i], (double)goukeGakusei[i] / (double)KAMOKU);
	}

	return 0;
}