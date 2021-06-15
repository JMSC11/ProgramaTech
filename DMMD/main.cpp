#include <iostream>
#include <stdlib.h>
#include "GUI_PRINCIPAL.h"
//#include "GestionCuentas\ListaDeCuentas.h"
#include "GestionDeAutenticacion\Autenticacion.h"

using namespace std;

int main() {
    ListaDeCuentas lista_cuentas;
    bool estado_inicio;
    cuenta *cuenta_actual;
    Autenticacion Aut;
    GUI_PRINCIPAL Gui;
    int opcion, cuentaID;
    do
    {
        opcion = Gui.menuPrincipal();
        switch(opcion)
        {
            case 1:
                cuenta_actual=Aut.iniciarSesion(lista_cuentas);
                if (cuenta_actual!=NULL)
                {
                    system("cls");
                    estado_inicio=true;
                    cout << "INICIO DE SESION EXITOSO";
                    system("pause");
                }
                else
                {
                    cout <<endl<< "INICIO DE SESION NOOOOOOOOO EXITOSO";
                    system("pause");
                }
            break;
            case 2:
                Aut.registrarse(lista_cuentas);
            break;  
        }
    }while(opcion!=3);
    system("cls");
    cout << "La lista consiste de: " << endl;
    lista_cuentas.mostrar("1");
    cout << "Salida exitosa";
    return 0;
}
