#pragma once
#include <stdio.h>

//List9-3の配列strの宣言を次のように書きかえたプログラムを作成
//し, 実行結果を考察せよ.

/*
* ABC\0DEFを文字列として表示する関数
*/

void call0901() {

	char str[] = "ABC\0DEF";

	printf("\"ABC\\0DEF\"を表示します。\n");

	printf("文字列strは\"%s\"です。\n", str);

	printf("変換指定子を%%sとしているため、文字列として扱われる\"ABC\\0\"までを表示する。\n");

}