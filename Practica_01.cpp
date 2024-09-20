// Practica_01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include "CportCOM.h";
#include "Cpic.h";
int main()
{
    int d;
    Cpic op;
    op.initObjeto();
    cout << "Ingrese 1 para encender el LED o 0 para apagarlo";
    cin >> d;
    op.enviarDatos(1, d);
    cout << "Se leera el estado del boton conectado en C0" << endl;
    system("pause");
    op.enviarDatos(14, d);
    Sleep(10);
    op.recibirDatos(d);
    d= op.recibirDatos(d);
    if(d)
        cout << "El boton esta presionado";
    else
        cout << "El boton no esta presionado";
    cout << "Ingrese un valor entre 1 y 255 para escribir en el puerto D";
    cin >> d;
    op.enviarDatos(3, d);
    cout << "Se leera el valor analogico recibido en el puerto A0 convetido a dato digital" << endl;
    system("Pause");
    op.enviarDatos(6,0);
    Sleep(10);
    op.recibirDatos(d);
    d = op.recibirDatos(d);
    cout << "Dato recibido" << d << endl;
    op.closeObjeto();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
