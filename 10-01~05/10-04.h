#pragma once
#include <stdio.h>

//�v�f�^��int�^�ŗv�f����n�̔z����󂯎���āA�S�v�f�ɓY���Ɠ����l��������֐�set_idx���쐬����.

/*
* �v�f�^��int�^�ŗv�f����n�̔z����󂯎���āA�S�v�f�ɓY���Ɠ����l��������֐�
* \param v �z����w���|�C���^
* \param n �z��̗v�f��
*/

#define n_max 100

void set_idx(int *v, int n) {

	for (int i = 0; i < n; i++) {

		v[i] = i;

	}

}

void call1004() {

	int n;

	printf("0����n-1�܂ŕ��ׂ��z����쐬���܂�. n�ɓ����%d�ȉ��̐�������͂��Ă�������. : ", n_max);

	scanf_s("%d", &n);

	int v[n_max];

	set_idx(v, n);

	printf("�z��̒l���o�͂��܂�.\n");

	for (int i = 0; i < n; i++) {

		printf("%d ", v[i]);

	}

	printf("\n");

}