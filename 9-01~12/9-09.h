#pragma once
#include <stdio.h>

#define CNUM 128

//������s�̕����̕��т𔽓]����֐����쐬����.
//void rev_string(char s[]);
//���Ƃ���, s��"SEC"���󂯎������, ���̔z���"CES"�ɍX�V���邱��

/*
* ������s�̕����̕��т𔽓]����֐�
* \param s ������
*/

void rev_string(char s[]) {

	int n = 0;

	while (s[n]!='\0') n++;

	for (int i = 0; i < n/2; i++) {

		char temp = s[i];

		s[i] = s[n - 1 - i];

		s[n - 1 - i] = temp;

	}

	for (int i = 0; i < n; i++) {

		putchar(s[i]);

	}

}

void call0909() {

	printf("���������͂��Ă�������. �t�ɕ\�����܂�.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	rev_string(s);

}