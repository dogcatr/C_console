#pragma once
#include <stdio.h>

//List7-12�̂悤�ɁAfloat�^�̕ϐ���0.0����1.0�܂�0.01�����₵�Ă����l�q�ƁAList7-13�̂悤�ɁAint�^�̕ϐ���0����100�܂ŃC���N�������g�����l��100.0�Ŋ������l�����߂�l�q���A���ɕ��ׂĕ\������v���O�������쐬����.

void call0710() {
	float y = 0.00;
	float x;

	for (int i = 0; i <= 100; i++) {
		x = i / 100.0;
		printf("x = %f, y = %f\n", y, x);
		y += 0.01;
	}
}