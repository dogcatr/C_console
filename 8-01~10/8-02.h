#pragma once
#include <stdio.h>

#define max(x, y) (((x) > (y))? (x) : (y))

//max�̃}�N���𗘗p���āA�l�̒la, b, c, d�̍ő�l�����߂�.
//��̎����ǂ̂悤�ɓW�J����邩�����A�l�@��������.

void call0802() {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("max(max(a, b), max(c, d))��max(max(max(a, b), c), d)�̈Ⴂ\n");

	printf("max(max(1, 2), max(3, 4)) = %d\n", max(max(a, b), max(c, d)));

	printf("��x�̓W�J��(((max(1, 2)) > (max(3, 4)))? (max(1, 2)) : (max(3, 4)))�ƂȂ�.\n");

	printf("max�̓W�J�񐔂�5��\n");

	printf("max(max(max(1, 2), 3), 4) = %d\n", max(max(max(a, b), c), d));

	printf("��x�̓W�J��(((max(max(1, 2), 3)) > (4))? (max(max(1, 2), 3)) : (4))�ƂȂ�.\n");

	printf("max�̓W�J�񐔂�7��\n");
}