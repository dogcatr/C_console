#pragma once
#include <stdio.h>
#include "7-03.h"//bit�֘A�̊֐�
#include "7-04.h"
#define rep(i,n) for(int i = 0; i < n; i++)

//������������x�̑�pos�r�b�g�����pos+n-1�r�b�g�܂ł�n�̃r�b�g���A�Z�b�g�����l��Ԃ��֐�set_n�A���Z�b�g�����l��Ԃ��֐�reset_n�A���]�����l��Ԃ��֐�inverse_n���쐬����.

unsigned set_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = set(x, pos + i);
	}
	return x;
}

unsigned reset_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = reset(x, pos + i);
	}
	return x;
}

unsigned inverse_n(unsigned x, int pos, int n) {
	rep(i, n) {
		x = inverse(x, pos + i);
	}
	return x;
}

void call0705() {
	unsigned x;
	int pos;
	int n;
	printf("���̐���x�����: "); scanf_s("%u", &x);
	printf("���̐���pos�����: "); scanf_s("%d", &pos);
	printf("���̐���n�����: "); scanf_s("%d", &n);

	printf("2�i����");
	print_bits(x);

	printf("��%d ~ %d�r�b�g��set ", pos, pos + n - 1);
	print_bits(set_n(x, pos, n));

	printf("��%d ~ %d�r�b�g��reset ", pos, pos + n - 1);
	print_bits(reset_n(x, pos, n));

	printf("��%d ~ %d�r�b�g��inverse ", pos, pos + n - 1);
	print_bits(inverse_n(x, pos, n));
}