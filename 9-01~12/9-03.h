#pragma once
#include <stdio.h>

#define NUM 4//������̌�

#define CNUM 128//������̍ő咷

//List9-7�����̂悤�ɏ����������v���O�������쐬����B
//�E������̌���3�����傫�Ȓl�Ƃ��A���̒l���I�u�W�F�N�g�`���}�N���Ƃ��Ē�`����B
//�E�ŏ���for���ł́A"$$$$$"��ǂݍ��񂾎��_�œǂݍ��݂𒆒f�E�I������B
//�E2�Ԗڂ�for���ł́A"$$$$$"���O�ɓ��͂��ꂽ�S�������\������B

/*
* ������̍ŏ���$$$$$�ł��邩���肷��֐�
*/

int dolcheck(char c[]) {

	if (c[0] == '$' && c[1] == '$' && c[2] == '$' && c[3] == '$' && c[4] == '$' && c[5]=='\0') {

		return 1;

	}

	return 0;

}

/*
* ������̔z���ǂݍ���ŕ\�����A"$$$$$"�����͂��ꂽ��ǂݍ��݂𒆒f����֐�
*/

void call0903() {

	char s[NUM][CNUM];

	int lm = NUM;//$$$$$���o��܂ł̍s��

	printf("������𕡐����͂��Ă��������B$$$$$�Ɠ��͂���ƏI�����܂��B\n");

	for (int i = 0; i < NUM; i++) {

		printf("s[%d] : ", i);

		scanf_s("%s", s[i], CNUM);

		if (dolcheck(s[i])) {

			lm = i;

			break;

		}

	}

	for (int i = 0; i < lm; i++) {

		printf("s[%d]=\"%s\"\n", i, s[i]);

	}

}