//5-8
//演習5-7の分布グラフの表示を縦方向に行うプログラムを作成せよ。

#include <stdio.h>

#define NUMBER 120

int main(void)
{
	puts("演習5-7の分布グラフの表示を縦方向に行うプログラムを作成せよ。");

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

	int maxbunpu = bunpu[0];
	for (int i = 0; i < 11; i++) {
		if (maxbunpu < bunpu[i]) maxbunpu = bunpu[i];//分布の最高値
	}

	for (int i = 0; i < maxbunpu; i++) {
		for (int j = 0; j < 11; j++) {
			if (maxbunpu - i <= bunpu[j]) {//ある人数以上いれば, *表示
				printf("  *");
			}
			else {//いない場合
				printf("   ");
			}
		}
		putchar('\n');
	}

	for (int j = 0; j < 11; j++) {
		printf("---");
	}
	printf("--");//調整
	putchar('\n');

	for (int j = 0; j < 10; j++) {
		printf("%3d", j * 10);
	}
	printf(" %3d", 10 * 10);//調整
	putchar('\n');

	return 0;
}