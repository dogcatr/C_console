#pragma once
#include <stdio.h>

#define ARYLEN 5
#define CNUM 128

//�󂯎����������̔z��Ɋi�[����Ă���n�̕�����̕����̕��т𔽓]����֐����쐬����.

/*
* �󂯎����������̔z��Ɋi�[����Ă���n�̕�����̕����̕��т𔽓]����֐�
* \param strs ������̔z��
* \param n
*/

void rev_strings(char strs[][128], int n) {

	for (int i = 0; i < n; i++) {

		int m = 0;

		while (strs[i][m] != '\0') m++;

		for (int j = 0; j < m / 2; j++) {

			char temp = strs[i][j];

			strs[i][j] = strs[i][m - 1 - j];

			strs[i][m - 1 - j] = temp;

		}

	}

	for (int i = 0; i < n; i++) {

		printf("%s\n", strs[i]);

	}

}

void call0912() {

	printf("5�ȉ��̐�������͂��Ă�������. : ");

	int n;

	scanf_s("%d", &n);

	printf("������𕡐���(%d�ȉ�)���͂��Ă�������. : ", n);

	char strs[ARYLEN][CNUM];

	for (int i = 0; i < n; i++) {

		scanf_s("%s", strs[i], CNUM);

	}

	rev_strings(strs, n);

	printf("���]�����\n");

}