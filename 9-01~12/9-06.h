#pragma once
#include <stdio.h>

#define CNUM 128

//������s�̒��ɁA����c���܂܂�Ă������Ԃ��֐����쐬����B

/*
* ������s�̒��ɁA����c���܂܂�Ă������Ԃ��֐�
* \param s ������
* \param c ����
*/

int str_chnum(const char s[], int c) {

	int i = 0;

	int cnt = 0;//c�̌�

	while (s[i]) {

		if (s[i] == c) {

			cnt++;

		}

		i++;

	}

	return cnt;

}

void call0906() {

	char s[CNUM];

	char c;

	printf("%d�����ȓ��̕�����ƕ�������͂��Ă��������B\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("c : "); scanf_s("%*c%c", &c, 1);

	printf("%s����%c�̌��́A%d\n", s, c, str_chnum(s, c));

}