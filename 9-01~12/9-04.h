#pragma once
#include <stdio.h>

#define CNUM 128

//•¶š—ñ‚ğ‹ó•¶š—ñ‚É‚·‚éŠÖ”‚ğì¬‚¹‚æB

/*
* •¶š—ñ‚ğ‹ó•¶š—ñ‚É‚·‚éŠÖ”
* \param s •¶š—ñ
*/

void null_string(char s[]) {

	s[0] = '\0';

}

void call0904() {

	char s[CNUM];

	printf("%d•¶šˆÈ“à‚Ì•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n s : ", CNUM);

	scanf_s("%s", s, CNUM);

	null_string(s);

	printf("‹ó•¶š—ñ‚É‚·‚é‚Æ, s : %s\n", s);

}