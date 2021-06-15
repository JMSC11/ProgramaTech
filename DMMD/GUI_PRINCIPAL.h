#include <iostream>
#include "ListaDeCuentas.h"
#include <string>
#include <conio.h>

#define ENTER 13
#define ATRAS 8
#define INTENTO 3
using namespace std;

class GUI_PRINCIPAL {
private:
    string usuario, password, contra;
    int opcion;//NUEVO ATRIBUTO
public: 
    GUI_PRINCIPAL();
    int menuPrincipal();
};

GUI_PRINCIPAL::GUI_PRINCIPAL(){

}
// 
// Menu principal del sistema
// Permite iniciar sesion o registrarse
// 
int GUI_PRINCIPAL::menuPrincipal(){
    
    int contador = 0;
    bool ingreso = false;
    int menuP;
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
                    contra.append(1, caracter);
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
        }
    }
}