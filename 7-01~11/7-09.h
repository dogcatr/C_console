#pragma once
#include <stdio.h>
#include <math.h>

//�����l�̖ʐς���݂���ŁA���̖ʐς��������`�̈�ӂ̒��������߂�v���O�������쐬����.

void call0709() {
	double x;
	printf("���̎����l�����: "); scanf_s("%lf", &x);
	printf("�ʐ�%f�̐����`�̈�ӂ̒�����%f\n", x, sqrt(x));
}