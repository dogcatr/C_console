#pragma once
#include <stdio.h>

//�W�����͂Ɍ��ꂽ�s�����J�E���g����v���O�������쐬����.

/*
* ���͂��ꂽ���͂̍s�����o�͂���֐�
* \param ch ���͂�ǂݎ��
* \param cnt ���s���J�E���g����
*/

void call0809() {

	int ch;//���͂�ǂݎ��ch

	int cnt = 0;//���s���J�E���g����cnt

	printf("���͂̓��͂Ɖ��s�𕡐���s���Ă�������. �s�����o�͂��܂�. �Ō��Ctrl + Z�Ɠ��͂�����, Enter�������Ă�������.\n");

	while (1) {

		if((ch = getchar()) == '\n') cnt++;

		if (ch == EOF) break;

	}

	printf("�s��:%d\n", --cnt);

	printf("�I��\n");

}