#pragma once
#include <stdio.h>

//�����������������E�ɃV�t�g�����l���A��ʃr�b�g���͂����o����Ȃ�����A2�ׂ̂���ł̏�Z�⏜�Z�̉��Z���ʂƈ�v���邱�Ƃ��m�F����v���O�������쐬����.

void call0702() {
	int n;
	printf("���̐��������: "); scanf_s("%d", &n);
	printf("�E��1�V�t�g�����l: %d\n", n >> 1);
	printf("2�Ŋ������l: %d\n", n / 2);
	printf("����1�V�t�g�����l: %d\n", n << 1);
	printf("2�{�����l: %d\n", 2 * n);
}