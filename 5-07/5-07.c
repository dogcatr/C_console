//5-7
//List5-12の分布グラフの表示を逆順にに行うプログラムを作成せよ。

#include <stdio.h>

#define NUMBER 120

int main(void)
{
	puts("List5-12の分布グラフの表示を逆順にに行うプログラムを作成せよ。");

	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("人数を入力せよ。:");

	do {
		scanf_s("%d", &num);
		if (num < 1 || NUMBER < num) {
			printf("\a1～%dで入力せよ: ", NUMBER);
		}
	} while (num < 1 || NUMBER < num);

	printf("%d人の点数を入力せよ。\n", num);

	for (int i = 0; i < num; i++) {
		printf("%2d番: ", i + 1);
		do {
			scanf_s("%d", &tensu[i]);
			if (tensu[i] < 0 || 100 < tensu[i]) {
				printf("\a0～%dで入力せよ: ", 100);
			}
		} while (tensu[i] < 0 || NUMBER < tensu[i]);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---分布グラフ---");

	for (int i = 0; i < 10; i++) {
		printf("%3d～%3d: ", i * 10, i * 10 + 9);// i * 10 ～ i * 10 + 9 点
		for (int j = 0; j < bunpu[i]; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	printf("     100: ");//100点
	for (int j = 0; j < bunpu[10]; j++) {
		putchar('*');
	}
	putchar('\n');

	return 0;
}