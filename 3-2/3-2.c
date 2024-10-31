//3-1
//List3-9の最後のelseを、else if (no < 0)に変更するとどうなるかを検討せよ。

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力せよ: ");
	scanf_s("%d", &no);

	if (no == 0) {
		puts("その数は0です。");
	}
	else if (no > 0) {
		puts("その数は正です。");
	}
	else if (no < 0) {
		puts("その数は負です。");
	}
}

//変わらない