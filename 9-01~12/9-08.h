#pragma once
#include <stdio.h>

#define CNUM 128

//���������납��t�ɕ\������֐����쐬����.
//void put_stringr(const char s[]);
//���Ƃ���, s��"SEC"���󂯎������, ���̔z���"CES"�ƕ\�����邱��

/*
* ���������납��t�ɕ\������֐�
* \param s ������
*/

void put_stringr(const char s[]) {

	int n = 0;

	while (s[n]) n++;

	for (int i = n - 1; 0 <= i; i--) {

		putchar(s[i]);

	}

}

void call0908() {

	printf("���������͂��Ă�������. �t�ɕ\�����܂�.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	put_stringr(s);

}