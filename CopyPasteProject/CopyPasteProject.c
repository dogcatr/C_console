#include <stdio.h>

#define CNUM 128

//

int main(void)
{
	char s[CNUM];

	char c;

	printf("%d文字以内の文字列と文字を入力してください。\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	char z = 's';
	
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		printf("q\n");
		continue;
	}

	//int ch = getchar();

	printf("c : "); scanf_s("%c", &c, 1);

	printf("\n%s\n", s);

	printf("%c\n", c);

	return 0;
}