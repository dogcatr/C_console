#pragma once
#include <stdio.h>

//�W�����͂���ǂݍ��܂ꂽ�����������J�E���g����.

/*
* �W�����͂���ǂݍ��܂ꂽ�����������J�E���g����֐�
* \param ch ���͂�ǂݎ��
* \param cnt �����������J�E���g����
*/

void call0810() {

	int ch;//���͂�ǂݎ��ch

	int cnt[10] = { 0 };

	printf("���l����͂��Ă�������:\n");
	printf("Ctrl + Z�Ɠ��͂�����, Enter�������Ă�������.\n");

	while ((ch = getchar()) != EOF) {

		if (ch >= '0' && ch <= '9') {

			cnt[ch - '0']++;

		}

	}

	puts("���������̏o����");

	for (int i = 0; i < 10; i++) {

		printf("'%d' : ", i);

		for (int j = 0; j < cnt[i]; j++) {

			putchar('*');
		}

		putchar('\n');

	}

}