#include <iostream>
#include <stdlib.h>
#include <string>
#include "GUI_PRINCIPAL.h"
//#include "GestionCuentas\ListaDeCuentas.h"
#include "GestionDeAutenticacion\Autenticacion.h"

using namespace std;

void agregarAdministradores(ListaDeCuentas &lista_cuentas);

int main() {
    ListaDeCuentas lista_cuentas;
    bool estado_inicio=false;
    cuenta cuenta_actual;
    int id;
    string tipo_Cuenta;
    GUI_PRINCIPAL Gui;
    int opcion;
    agregarAdministradores(lista_cuentas);
    do
    {
        opcion = Gui.menuPrincipal();
        //Autenticacion Aut2;
        Autenticacion Aut;
        estado_inicio=false;
        
        switch(opcion)
        {    
            case 1: 
                id=Aut.iniciarSesion(lista_cuentas);
                if (id!=0)
                {
                    system("cls");
                    //estado_inicio=true;
                    cout << "INICIO DE SESION EXITOSO" << endl;
                    //lista_cuentas.obtenerCuenta("DiegoV", "Prueba", cuenta_actual);
                    lista_cuentas.obtenerCuenta(id, cuenta_actual);
                    //cout << "La cuenta encontrada es: " << endl;
                    //cuenta_actual.mostrarCuenta();
                    tipo_Cuenta=cuenta_actual.gettipoCuenta();
                    if (tipo_Cuenta=="1")
                    {
                        cout << "\t\t\tBienvenido usuario!" << endl;
                    }
                    else if(tipo_Cuenta == "2")
                    {
                        cout << "\t\t\tBienvenido Empresa!" << endl;
                    }
                    else if(tipo_Cuenta == "3")
                    {
                        cout << "\t\t\tBienvenido Especialista!" << endl;
                    }
                    else
                    {
                        cout << "\t\t\tBienvenido Administrador!" << endl;
                    }

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
                
                Aut.registrarse(lista_cuentas);
            break;  
        }
    }while(opcion!=3);
    system("cls");
    lista_cuentas.mostrar("1");
    cout << "Salida exitosa";
    system("pause");
    return 0;
}

void agregarAdministradores(ListaDeCuentas &lista_cuentas){
    cuenta *c = new cuenta (1,"Daniel21", "Prueba21", "Daniel Caparroso Gutierrez", "4", 22, "2193035668@cua.uam.mx", 5587650318);
    lista_cuentas.registrar(c);
    c = new cuenta (2,"Misael", "0000", "Misael Solano Contreras", "4", 22, "2193037862@cua.uam.mx", 5698647810);
    lista_cuentas.registrar(c);
    c = new cuenta (3,"Mau", "1111", "Mauricio Estrada Soto", "4", 20, "2193039825@cua.uam.mx", 5586033492);
    lista_cuentas.registrar(c);
    c = new cuenta (4,"DiegoV", "Prueba", "Diego Uriel Vazquez Ramirez", "4", 20, "2193036227@cua.uam.mx", 5574920392);
    lista_cuentas.registrar(c);
}