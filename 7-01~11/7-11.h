#pragma once
#include <stdio.h>

//List7-12��List7-13�̂��ꂼ������������āA0.0����1.0�܂�0.01�����₵���l���ׂĂ̗݌v�����߂�v���O�������쐬����.

void call0711() {
	printf("List7-12��ύX��������\n");
	float y = 0.00;
	for (float x = 0.0; x <= 1.0; x += 0.01) {
		y += x;
		printf("sum = %f\n", y);
	}

	printf("List7-13��ύX��������\n");

	float z;
	y = 0.00;
	for (int i = 0; i <= 100; i++) {
		z = i / 100.0;
		y += z;
		printf("sum = %f\n", y);
	}

	printf("List7-12�̕��͐��m�Ȓl���傫�����Ə�������������.\n");
	printf("List7-13�̕��͐��m�Ȓl���傫��������������.\n");
}