#pragma once
#include <stdio.h>

#define CNUM 128

//������s���̂��ׂĂ̐�����������������֐����쐬����.

/*
* ������s���̂��ׂĂ̐�����������������֐�
* \param s ������
*/

void del_digit(char s[]) {

	char scopy[CNUM];

	int j = 0;

	for (int i = 0; s[i]; i++) {

		if (s[i] - '0' < 0 || 9 < s[i] - '0') {
			
			scopy[j++] = s[i];

		}

	}

	scopy[j] = '\0';

	for (int i = 0; i<j+1; i++) {

		s[i] = scopy[i];

	}

}

void call0910() {

	printf("���������͂��Ă�������. �t�ɕ\�����܂�.\n");

	char s[CNUM];

	scanf_s("%s", s, CNUM);

	del_digit(s);

	printf("%s\n", s);

}