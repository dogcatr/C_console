#pragma once
#include <stdio.h>

//�o�u���\�[�g�̑����𖖔�������ł͂Ȃ��A
//�擪������s���悤�ɁAList 8-5������������
//�v���O�������쐬����.

/**
* �����Ƀ\�[�g����֐�
* \param a �\�[�g�����z��
* \param n �z��̒���
*/

#define NUMBER 5

void rbsort(int a[], int n) {
	for (int i = n - 1; -1 < i; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void call0804() {

	int height[NUMBER];

	printf("%d�l�̐g������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�� : ", i + 1);
		scanf_s("%d", &height[i]);
	}

	rbsort(height, NUMBER);

	puts("�����Ƀ\�[�g���܂����B");
	for (int i = 0; i < NUMBER; i++)
		printf("%2d�� : %d\n", i + 1, height[i]);
}