#pragma once
#include <stdio.h>

//�ċA�ďo����p�����ɁA�֐�factorial����������.

/**
* ���̐���n����͂���ƁAn!��\������
*/

void call0806() {

	//���̐���
	int n;
	
	printf("���̐���n����� : "); scanf_s("%d", &n);
	
	//n!
	int m = 1;
	for (int i = 1; i <= n; i++) {
		m *= i;
	}

	printf("%d! = %d\n", n, m);
}