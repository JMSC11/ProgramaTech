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
    //Autenticacion Aut;
    GUI_PRINCIPAL Gui;
    int opcion;
    do
    {
        opcion = Gui.menuPrincipal();
        Autenticacion Aut2;
        Autenticacion Aut;
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
                    system("cls");
                    cout <<endl<< "INICIO DE SESION NOOOOOOOOO EXITOSO";
                    system("pause");
                }
            break;
            case 2:
                
                Aut2.registrarse(lista_cuentas);
            break;  
        }
    }while(opcion!=3);
    system("cls");
    lista_cuentas.mostrar("1");
    cout << "Salida exitosa";
    system("pause");
    return 0;
}
