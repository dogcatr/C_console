//4-11
//List4-10のプログラムを、結果の出力時に読み込んだ値も表示するように書きかえよ。

#include <stdio.h>

int main(void)
{
	int no;

	do {
		printf("正の整数を入力せよ: ");
		scanf_s("%d", &no);
		if (no <= 0) {
			puts("\a正でない値を入力しないでください。");
		}
	} while (no <= 0);
	
	printf("%dを逆から読むと", no);

	while (0 < no) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("です。");

	return 0;
}