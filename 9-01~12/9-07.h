#pragma once
#include <stdio.h>

#define CNUM 128

//������s��n�񂾂��A�����ĕ\������֐����쐬����B

/*
* ������s��\��
*/

void put_string(const char s[]) {

	int i = 0;

	while (s[i]) {

		putchar(s[i++]);

	}

}

/*
* ������s��n�񂾂��A�����ĕ\������֐�
* \param s ������
* \param n ���̐���
*/

void put_stringn(const char s[], int n) {

	for (int i = 0; i < n; i++) {
		
		put_string(s);

	}

	putchar('\n');

}

void call0907() {

	char s[CNUM];

	int n;

	printf("%d�����ȓ��̕�����Ɛ��̐�������͂��Ă��������B\n", CNUM);

	printf("s : "); scanf_s("%s", s, CNUM);

	printf("n : "); scanf_s("%d", &n, 1);

	printf("%s��%d��J��Ԃ���,\n", s, n);

	put_stringn(s, n);

}