// GlobalVarManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GlobalVarManager.h"

#include <iostream>

using namespace std;

int main()
{
	GetGlobalVar()->Init();

	GetGlobalVar()->DestroyInstance();

	system("pause");
	return 0;
}

