//5-12
//2回分の点数を3次元配列tensuに格納するようにList5-15を書きかえたプログラムを作成せよ。

#include <stdio.h>

#define TIMES 2
#define NUMBER 4
#define KAMOKU 3

int main(void)
{
	puts("2回分の点数を3次元配列tensuに格納するようにList5-15を書きかえたプログラムを作成せよ。");

	int tensu[TIMES][NUMBER][KAMOKU] = {
		{{91,63,78,},{67,72,46,},{89,34,53,},{32,54,34,},},
		{{97,67,82,},{73,43,46,},{97,56,21,},{85,46,35,},},
	};

	for (int i = 0; i < TIMES; i++) {
		printf("%d回目の点数\n", i + 1);
		for (int j = 0; j < NUMBER; j++) {
			for (int k = 0; k < KAMOKU; k++) {
				printf("%4d", tensu[i][j][k]);
			}
			putchar('\n');
		}
	}

	printf("合計点\n");
	for (int j = 0; j < NUMBER; j++) {
		for (int k = 0; k < KAMOKU; k++) {
			int point = 0;
			for (int l = 0; l < TIMES; l++) {
				point += tensu[l][j][k];
			}
			printf("%4d", point);
		}
		putchar('\n');
	}

	return 0;
}