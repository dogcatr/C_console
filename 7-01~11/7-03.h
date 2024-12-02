#pragma once
#include <stdio.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define ONEBYTE 8

//������������x�̑S�r�b�g���E��n�r�b�g�J�X�����l��Ԃ��֐�rrotate�ƁA����n�r�b�g��]�����l��Ԃ��֐�lrotate���쐬����.

//n�E�V�t�g�ŏ�����n�r�b�g��, sizeof(x)-n���V�t�g�œ�����.
//�E�V�t�g�����l�ƍ��V�t�g�����l�����킹��ƃ��[�e�[�g�����l��������.
unsigned rrotate(unsigned x, int n) {
	unsigned y = x << (sizeof(x) * ONEBYTE - n);
	return (x >> n) | y;
}

unsigned lrotate(unsigned x, int n) {
	unsigned y = x >> (sizeof(x) * ONEBYTE - n);
	return (x << n) | y;
}

int count_bits(unsigned x) {
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void) {
	return count_bits(~0U);
}

void print_bits(unsigned x) {
	for (int i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
	putchar('\n');
}

void call0703() {
	unsigned x;
	int n;
	printf("���̐��������: "); scanf_s("%u", &x);//%o��%d�Œl���ς��
	printf("���[�e�[�g����񐔂����: "); scanf_s("%d", &n);

	printf("%u\n", x);
	print_bits(x);
	putchar('\n');
	print_bits(rrotate(x, n));
	putchar('\n');
	print_bits(lrotate(x, n));
	putchar('\n');
	printf("�E��%d���[�e�[�g: %u\n", n, rrotate(x, n));
	printf("����%d���[�e�[�g: %u\n", n, lrotate(x, n));
	//printf("%zu", sizeof(x));
}