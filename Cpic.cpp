#include <iostream>;
using namespace std;
#include "Cpic.h";
#include "CportCOM.h";
void Cpic::initObjeto() {
	puerto.Init(pto);
}
void Cpic::closeObjeto() {
	puerto.Close();
}
void Cpic::enviarDatos(int x, int y){
	datos[0] = x;
	datos[1] = y;
	puerto.SendPacket(datos);
}
int Cpic::recibirDatos(int rec) {
	puerto.ReceivePacket(datos);
	datos[0] = rec;
	return datos[0];
}