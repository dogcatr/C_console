#pragma once
#include <stdio.h>

#define swap(type, x, y) type t = x; x = y; y = t

void call0803() {
	printf("��̐��������:\n");

	int x, y;

	printf("x: "); scanf_s("%d", &x);

	printf("y: "); scanf_s("%d", &y);

	printf("x = %d, y = %d\n", x, y);

	printf("swap�֐���K�p�����\n");
	
	swap(int, x, y);

	printf("x = %d, y = %d\n", x, y);
}