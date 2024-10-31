//5-5
//変数aがint型で、変数bがdouble型であるとする。次の代入によって、それぞれの変数の値はどうなるかを説明せよ。
//a = b = 1.5;

#include <stdio.h>

#define NUMBER 10

int main(void)
{
	puts("変数aがint型で、変数bがdouble型であるとする。次の代入によって、それぞれの変数の値はどうなるかを説明せよ。");
	puts("a = b = 1.5;");
	puts("式b = 1.5によりbの値は1.5、この式の評価によりa = 1.5");
	puts("aはint型なので、aの値は1");

	int a;
	double b;
	a = b = 1.5;

	printf("a = %3d, b = %3.1f", a, b);

	return 0;
}