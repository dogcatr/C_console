#pragma once
#include <stdio.h>

//����*y�O*m��*d���̓��t���A"�O�̓�" ���邢�� "���̓�" �̓��t��
// �X�V����֐����쐬����.

/*
* decriment_date "�O�̓�" �̓��t�ɍX�V����֐�
* incriment_date "�O�̓�" �̓��t�ɍX�V����֐�
* \param y �N
* \param m ��
* \param d ��
*/

#define tukisu 12

int uru(int* y) {
	if (*y % 4 == 0 && (*y % 100 != 0 || *y % 400 == 0)) return 1;
	else return 0;
}

void decrement_date(int *y, int *m, int *d) {

	int nichisu[tukisu] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (*d != 1) {//2���ȏ�Ȃ����-1����

		(*d)--;

		return;
	}

	//�[�N�Ȃ�2���̓�����29�ɂ���

	if (uru(y)) {

		nichisu[1] = 29;

	}

	//1���̎�

	if (*m == 1) {

		(*y)--;

	}

	//*m = tukisu - ((tukisu + 1 - *m) % tukisu);
	*m = (*m == 1) ? tukisu : (*m - 1);

	*d = nichisu[*m - 1];

}

void increment_date(int *y, int *m, int *d) {

	int nichisu[tukisu] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	//�[�N�Ȃ�2���̓�����29�ɂ���

	if (uru(y)) {

		nichisu[1] = 29;

	}

	if (*d != nichisu[*m - 1]) {//���̍ŏI���ȊO�Ȃ������1���₷

		(*d)++;

		return;

	}

	//���̍ŏI���̎�

	if (*m == tukisu) {

		(*y)++;

	}

	*m = (*m == tukisu)? 1 : (*m + 1);

	*d = 1;

}

void call1002() {

	int yeardec, monthdec, datedec;

	int yearinc, monthinc, dateinc;

	printf("����̓��t�̐����������󔒋�؂�œ��͂��Ă�������.\n");

	scanf_s("%d", &yeardec);

	scanf_s("%d", &monthdec);

	scanf_s("%d", &datedec);

	yearinc = yeardec;

	monthinc = monthdec;

	dateinc = datedec;

	decrement_date(&yeardec, &monthdec, &datedec);

	increment_date(&yearinc, &monthinc, &dateinc);

	printf("�O�̓���, %d�N%d��%d���ł�.\n", yeardec, monthdec, datedec);

	printf("���̓���, %d�N%d��%d���ł�.\n", yearinc, monthinc, dateinc);

}