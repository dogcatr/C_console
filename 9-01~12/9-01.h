#pragma once
#include <stdio.h>

//List9-3�̔z��str�̐錾�����̂悤�ɏ����������v���O�������쐬
//��, ���s���ʂ��l�@����.

/*
* ABC\0DEF�𕶎���Ƃ��ĕ\������֐�
*/

void call0901() {

	char str[] = "ABC\0DEF";

	printf("\"ABC\\0DEF\"��\�����܂��B\n");

	printf("������str��\"%s\"�ł��B\n", str);

	printf("�ϊ��w��q��%%s�Ƃ��Ă��邽�߁A������Ƃ��Ĉ�����\"ABC\\0\"�܂ł�\������B\n");

}