#pragma once
#include "CPortCOM.h"
class Cpic {
private:
	CPortCOM puerto;
	int datos[10];
	CString pto = "COM7";
	
public:
	void initObjeto();
	void closeObjeto();
	void enviarDatos(int x, int y);
	int recibirDatos(int rec);
};
