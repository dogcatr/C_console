#pragma once
#include <stdio.h>

#define CNUM 128

//��������󕶎���ɂ���֐����쐬����B

/*
* ��������󕶎���ɂ���֐�
* \param s ������
*/

void null_string(char s[]) {

	s[0] = '\0';

}

void call0904() {

	char s[CNUM];

	printf("%d�����ȓ��̕��������͂��Ă��������B\n s : ", CNUM);

	scanf_s("%s", s, CNUM);

	null_string(s);

	printf("�󕶎���ɂ����, s : %s\n", s);

}