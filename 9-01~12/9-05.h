#pragma once
#include <stdio.h>

#define CNUM 128

//������s�̒��ɁA����c���܂܂�Ă���΁A���̓Y����Ԃ��A�܂܂�
// �Ă��Ȃ����-1��Ԃ��֐����쐬����B

/*
* ����c�̓Y����Ԃ��֐�
* \param s ������
* \param c ����
*/

int str_char(const char s[], int c) {

	int len = 0;

	while (s[len] != '\0') {

		if (s[len] == c) {

			return len;
		}

		len++;

	}

	return -1;

}

void call0905() {

	char s[CNUM];

	char c;

	printf("%d�����ȓ��̕�����ƕ�������͂��Ă��������B\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("c : "); scanf_s("%*c%c", &c, 1);

	printf("%s����%c�̓Y���́A%d\n", s, c, str_char(s, c));

}