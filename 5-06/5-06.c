//5-6
//配列に格納するデータ数と要素の値を読み込んで、その値を表示するプログラムを作成せよ。

#include <stdio.h>

#define NUMBER 100

int main(void)
{
	puts("配列に格納するデータ数と要素の値を読み込んで、その値を表示するプログラムを作成せよ。");

	int num;
	int x[NUMBER];

	do {
		printf("データ数: ");
		scanf_s("%d", &num);
		if (num < 1 || NUMBER < num) {
			printf("\a1～%dで入力せよ。");
		}
	} while (num < 1 || NUMBER < num);

	for (int i = 0; i < num; i++) {
		printf("%d番: ", i + 1);
		scanf_s("%d", &x[i]);
	}

	printf("{");
	for (int i = 0; i < num - 1; i++) {
		printf("%3d,", x[i]);
	}
	printf("%3d}", x[num - 1]);
	
	return 0;
}