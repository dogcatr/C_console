#pragma once
#include <stdio.h>

//n�̎w���l��0��菬�������0�ɍX�V���A100���傫�����100�ɍX�V����֐�adjust_point���쐬����B

/*
* n�̎w���l��0��菬�������0�ɍX�V���A100���傫�����100�ɍX�V����֐�
* \param n int�̃|�C���^
*/

void adjust_point(int* n) {
	if (*n < 0) {
		*n = 0;
	}
	else if (*n > 100) {
		*n = 100;
	}
}

void call1001() {

	printf("��������͂��Ă�������. 0��菬�����ꍇ, 0��, 100���傫���ꍇ, 100��, \n����ȊO�̏ꍇ��, ���͂������l��\�����܂�. : ");

	int s;

	scanf_s("%d", &s);

	int* n = &s;

	adjust_point(n);

	printf("���l : %d\n", *n);

}