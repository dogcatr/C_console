#pragma once
#include <stdio.h>

//�|�C���^n1, n2, n3���w���O��int�^�����������Ƀ\�[�g����֐����쐬����.

/*
* �|�C���^n1, n2, n3���w���O��int�^�����������Ƀ\�[�g����֐�
* \param n1, n2, n3 int�^���w���|�C���^
*/

void swap(int* x, int* y) {

	int temp = *x;

	*x = *y;

	*y = temp;

}

void sort3(int* n1, int* n2, int* n3) {

	if(*n1 > *n2){

		swap(n1, n2);

	}

	if (*n2 > *n3) {

		swap(n2, n3);

	}

}

void call1003() {

	int a, b, c;

	printf("��̐�������͂���.\n");

	printf("����a : "); scanf_s("%d", &a);

	printf("����b : "); scanf_s("%d", &b);

	printf("����c : "); scanf_s("%d", &c);

	sort3(&a, &b, &c);

	printf("�����Ƀ\�[�g���܂���.\n");

	printf("����a : %d\n", a);

	printf("����a : %d\n", b);

	printf("����a : %d\n", c);

}