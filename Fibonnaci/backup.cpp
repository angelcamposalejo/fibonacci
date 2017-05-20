#include "stdafx.h"  //________________________________________ Fibonnaci.cpp
#include "Fibonnaci.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Fibonnaci app;
	return app.BeginDialog(IDI_Fibonnaci, hInstance);
}

void Fibonnaci::Window_Open(Win::Event& e)
{

}

