#pragma once
#include <stdio.h>

//List10-11�̊֐�ary_set���Aart_set(&a[2],2,99)�ƌĂяo���Ƃǂ��Ȃ邩. ���s����ƂƂ���, ���̌��ʂ���������.

/*
* �z��v�̐擪n�̗v�f��val����
* \param v �z����w���|�C���^
* \param n �v�f��
* \param val �v�f�ɑ������l
*/

void ary_set(int v[], int n, int val) {

	for (int i = 0; i < n; i++) {

		v[i] = val;

	}

}

void call1005() {

	printf("ary_set��ary_set(&a[2], 2, 99)�ŌĂяo����, &a[2]���z��̍ŏ��̗v�f���w���|�C���^�Ƃ��Ĉ����, a[2]=a[3]=99�ƂȂ�. \n");

	int a[] = { 1,2,3,4,5 };

	ary_set(&a[2], 2, 99);

	for (int i = 0; i < 5; i++) {

		printf("a[%d] = %d\n", i, a[i]);

	}

}