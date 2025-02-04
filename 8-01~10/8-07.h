#pragma once
#include <stdio.h>

//�قȂ�n�̐�������r�̐��������o���g�ݍ��킹�̐�nCr�����߂�֐����쐬����B

/*
* nCr��Ԃ��֐�
* \param n �����̌�
* \param r n����I�Ԑ����̌�
*/

int combination(int n, int r) {
	
	//nCr = (n-1)C(r-1) + (n-1)Cr
	//nC0 = nCn = 1
	//nC1 = n
	if (r == 0 || r == n) {
		return 1;
	}
	else if (r == 1) {
		return n;
	}
	
	return combination(n - 1, r - 1) + combination(n - 1, r);
}

void call0807() {
	int n, r;

	printf("nCr���v�Z���܂�\n");
	printf("n : "); scanf_s("%d", &n);
	printf("r : "); scanf_s("%d", &r);

	printf("nCr = %d\n", combination(n, r));
}