// cpp.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#include "../lib/mylib.h"

using namespace mylib;

int main()
{
	class Human *p = new Human();
	delete p;

    return 0;
}

