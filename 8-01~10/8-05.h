#pragma once
#include <stdio.h>

//���ʂ�G�߂Ȃǂ�\���񋓑������R�ɒ�`���A
//�����p�����v���O�������쐬����.

enum season {Spring, Summer, Fall, Winter, Invalid};

enum season select(void) {
	
	enum season tmp;

	do {
		printf("0�E�E�E�t 1�E�E�E�� 2�E�E�E�H 3�E�E�E�~ 4�E�E�E�I��");
		scanf_s("%d", &tmp);
	} while (tmp < Spring || tmp > Invalid);

	return tmp;
}

void call0805() {
	
	enum season selected;

	do {
		switch (selected = select()) {
		case Spring: printf("�t�͂����ڂ�\n"); break;
		case Summer: printf("�Ă͏���\n"); break;
		case Fall: printf("�H�͍g�t\n"); break;
		case Winter: printf("�~�͊���\n"); break;
		}
	} while (selected != Invalid);
}