#include "stdafx.h"  //________________________________________ Fibonnaci.cpp
#include "Fibonnaci.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Fibonnaci app;
	return app.BeginDialog(IDI_Fibonnaci, hInstance);
}

void Fibonnaci::Window_Open(Win::Event& e)
{
	wstring texto;
	int x = 0;
	int y = 1;
	int temporal;
	int i = 0;
	Sys::Format(texto, L"%d, %d,",x,y);
	tbxSalida.Text += texto;
	while (i < 10)
	{
		temporal = y;
		y = x + y;
		x = temporal;
		Sys::Format(texto, L"%d,",y);
		tbxSalida.Text += texto;
		i++;
	}
}

