#pragma once
#include <stdio.h>

#define ARYLEN 5
#define CNUM 128

//List9-12��, ���̂悤�ɏ����������v���O�������쐬����.
//������̌���3�����傫�Ȓl�s�s, ���̒l���I�u�W�F�N�g�`���}�N���Ƃ��Ē�`����.
//������̕�������6�ł͂Ȃ�128�Ƃ�, ���̒l���I�u�W�F�N�g�`���}�N���Ƃ��Ē�`����.
//������̔z���ǂݍ��ފ֐����쐬����. ���K9-3�Ɠ��l��, "$$$$$"��ǂݍ��񂾎��_��, �ǂݍ��݂𒆒f����.
//"$$$$$"���O�ɓ��͂��ꂽ�S�������\������.

/*
* $$$$$�����͂��ꂽ���_�œǂݍ��݂𒆎~��, ������̔z���\������֐�
* \param s ������̔z��
*/

void put_strary(const char s[][CNUM], int n) {

	for (int i = 0; i < n; i++) {

		printf("s[%d] = \"%s\"\n", i, s[i]);

	}

}

int dollars(const char str[]) {

	int t = 1;

	char dol[] = "$$$$$";

	for (int i = 0; i < 6; i++) {

		if (str[i] != dol[i]) {

			t = 0;

			break;

		}

	}

	return t;

}

void call0911() {

	char cs[ARYLEN][CNUM];

	printf("������𕡐����͂��Ă�������.(%d�ȉ�) : ", ARYLEN);

	int c = ARYLEN;//$$$$$�����͂����O�܂ł̕�����̌�

	for (int i = 0; i < ARYLEN; i++) {

		scanf_s("%s", &cs[i], CNUM);

		if (dollars(cs[i])) {

			c = i;

			break;

		}

	}

	put_strary(cs, c);

}