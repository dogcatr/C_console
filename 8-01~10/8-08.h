#pragma once
#include <stdio.h>

//��̐����lx��y�̍ő���񐔂�
//���[�N���b�h�̌ݏ��@��p���ċ��߂�֐����쐬����.

int gcd(int x, int y) {

	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

void call0808() {
	
	printf("���̐��������͂��Ă�������\n");
	
	int x, y;
	
	printf("x : "); scanf_s("%d", &x);
	printf("y : "); scanf_s("%d", &y);

	printf("x��y�̍ő���� : %d\n", gcd(x, y));
}