#pragma once
#include <stdio.h>

//float�^�̕ϐ���double�^�̕ϐ���long double�^�̕ϐ��ɃL�[�{�[�h���琔�l��ǂݍ���ŁA���̒l��\������v���O�������쐬����.

void call0707() {
	float a;
	double b;
	long double c;
	printf("float�̐��l�����: "); scanf_s("%f", &a);
	printf("double�̐��l�����: "); scanf_s("%lf", &b);
	printf("long double�̐��l�����: "); scanf_s("%Lf", &c);
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %Lf\n", c);
}