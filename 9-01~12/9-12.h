#pragma once
#include <stdio.h>

#define ARYLEN 5
#define CNUM 128

//ó‚¯æ‚Á‚½•¶š—ñ‚Ì”z—ñ‚ÉŠi”[‚³‚ê‚Ä‚¢‚énŒÂ‚Ì•¶š—ñ‚Ì•¶š‚Ì•À‚Ñ‚ğ”½“]‚·‚éŠÖ”‚ğì¬‚¹‚æ.

/*
* ó‚¯æ‚Á‚½•¶š—ñ‚Ì”z—ñ‚ÉŠi”[‚³‚ê‚Ä‚¢‚énŒÂ‚Ì•¶š—ñ‚Ì•¶š‚Ì•À‚Ñ‚ğ”½“]‚·‚éŠÖ”
* \param strs •¶š—ñ‚Ì”z—ñ
* \param n
*/

void rev_strings(char strs[][128], int n) {

	for (int i = 0; i < n; i++) {

		int m = 0;

		while (strs[i][m] != '\0') m++;

		for (int j = 0; j < m / 2; j++) {

			char temp = strs[i][j];

			strs[i][j] = strs[i][m - 1 - j];

			strs[i][m - 1 - j] = temp;

		}

	}

	for (int i = 0; i < n; i++) {

		printf("%s\n", strs[i]);

	}

}

void call0912() {

	printf("5ˆÈ‰º‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢. : ");

	int n;

	scanf_s("%d", &n);

	printf("•¶š—ñ‚ğ•¡”ŒÂ(%dŒÂˆÈ‰º)“ü—Í‚µ‚Ä‚­‚¾‚³‚¢. : ", n);

	char strs[ARYLEN][CNUM];

	for (int i = 0; i < n; i++) {

		scanf_s("%s", strs[i], CNUM);

	}

	rev_strings(strs, n);

	printf("”½“]‚·‚é‚Æ\n");

}