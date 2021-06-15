#include <iostream>
#include "GestionCuentas\ListaDeCuentas.h"
#include <string>
#include <conio.h>

#define ENTER 13
#define ATRAS 8
#define INTENTO 3
using namespace std;

class GUI_PRINCIPAL {
private:
public: 
    GUI_PRINCIPAL();
    void menuPrincipal();
};


GUI_PRINCIPAL::GUI_PRINCIPAL(){
    
}
// 
// Menu principal del sistema
// Permite iniciar sesion o registrarse
// 
void GUI_PRINCIPAL::menuPrincipal(){
    
    int contador = 0;
    bool ingreso = false;
    int menuP, id=0;
    string usuario, password;
    int menu2;
    int edad;
    double telefono;
    ListaDeCuentas lCuentas;
    string nombre, tipoCuenta, correo;
    cout << "\t| Bienvenido a DMMD |" << endl;
    cout << "" << endl;


    do
    { 
        system("cls");
        cout << "Eliga la opcion del menu a continuacion \n1. Iniciar sesion\n2. Registrarse\n3. Salir" << endl;
        cin >> menuP;
        
        switch (menuP)
        {
            case 1:
                system ("cls");
                cout << "\t\t\tLOGIN DE USUARIO" << endl;
                cout << "\t\t\t----------------" << endl;
                cout <<"\n\tUsuario: ";
                cin >> usuario;

                char caracter;

                cout <<"\tPassword: ";
                caracter = getch();
                password = "";

                while (caracter != ENTER)
                {
                    if (caracter != ATRAS)
                    {
                        password.push_back(caracter);
                        cout << "*";
                    }
                    else
                    {
                        if (password.length() > 0)
                        {
                            cout << "\b \b";
                            password = password.substr(0, password.length() - 1);
                        }
                    }
                caracter = getch();
                }
            break;

            case 2:
                cout << "Tipo de cuenta a registrar" << endl;
                cin >> menu2;
                switch(menu2)
                {
                    case 1: //int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono
                        id++; 
                        system("cls");
                        cin.ignore();
                        cout << "\t\tTipo de cuenta Usuario\n\t\tFavor de ingresar los siguientes datos:" << endl;
                        cout << "Usuario: ";
                        getline(cin,usuario);
                        cout << "\nContrase\244a: ";
                        getline(cin,password);
                        cout << "\nNombre: ";
                        getline(cin,nombre);
                        cout << "\nEdad: ";
                        cin >>edad;
                        cout << "\nCorreo: ";
                        cin >> correo;
                        cout << "\nTelefono: ";
                        cin >>telefono;
                        cuenta *c =  new cuenta(id, usuario, password, nombre, "1", edad, correo, telefono);
                        lCuentas.registrar(c);
                        lCuentas.mostrar("1");
                        system("pause");
                    break;

                    /*default:
                        cout << "Opcion no valida" << endl;
                    break;*/
                }

            break;

            case 3:
                cout << "Sales" << endl;
            break;

            default:
                cout << "opcion no valida" << endl;
            break;
        }
    }while(menuP!=3);
}