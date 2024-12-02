#pragma once
#include <stdio.h>
#include "7-03.h"//bit�֘A�̊֐�
#define rep(i,n) for(int i = 0; i < n; i++)

//������������x�̑�pos�r�b�g���A�Z�b�g�����l��Ԃ��֐�set�A���Z�b�g�����l��Ԃ��֐�reset�A���]�����l��Ԃ��֐�inverse���쐬����.

unsigned set(unsigned x, int pos) {
	return x | (1U << pos);
}

unsigned reset(unsigned x, int pos) {
	return x & (~(1U << pos));
}

unsigned inverse(unsigned x, int pos) {
	return x ^ (1U << pos);
}

void call0704() {
	unsigned x;
	int pos;
	printf("���̐���x�����: "); scanf_s("%u", &x);
	printf("���̐���pos�����: "); scanf_s("%d", &pos);

	printf("2�i����");
	print_bits(x);

	printf("pos: %d�̈ʒu��set ", pos);
	print_bits(set(x, pos));

	printf("pos: %d�̈ʒu��reset ", pos);
	print_bits(reset(x, pos));

	printf("pos: %d�̈ʒu��inverse ", pos);
	print_bits(inverse(x, pos));
}