#pragma once
#include <stdio.h>

//��̒lx��y�̍������߂�֐��`���}�N�����`����.

#define diff(x, y) x - y

void call0801() {
	printf("��̒lx��y�̍������߂�֐�diff�̈���(����)�����:\n");
	int x, y;

	printf("x: "); scanf_s("%d", &x);

	printf("y: "); scanf_s("%d", &y);

	printf("diff(%d, %d) = %d\n", x, y, diff(x, y));
}