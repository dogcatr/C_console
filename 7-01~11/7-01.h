#pragma once
#include <stdio.h>]

//�e���̒l��\������v���O�������쐬����.

void call0701() {
	int n = 1;
	printf("sizeof 1: %zu, ", sizeof 1);
	printf("sizeof (unsigned) - 1: %zu, ", sizeof(unsigned) - 1);
	printf("sizeof n + 2: %zu\n", sizeof n + 2);
	printf("sizeof + 1: %zu, ", sizeof + 1);
	printf("sizeof(double) - 1: %zu, ", sizeof(double) - 1);
	printf("sizeof(n + 2): %zu\n", sizeof(n + 2));
	printf("sizeof - 1: %zu, ", sizeof - 1);
	printf("sizeof((double) - 1): %zu, ", sizeof((double)-1));
	printf("sizeof(n + 2, 0): %zu\n", sizeof(n + 2.0));

	printf("���͂��ׂ�int��size_t");
	printf("�^�񒆂̏��͌^��size_t�̒l����1����������, ��ԉ���double�^��-1��size_t�̒l");
	printf("�E�̏��sizeof(n) + 2, �E�̉���double��size_t");
}