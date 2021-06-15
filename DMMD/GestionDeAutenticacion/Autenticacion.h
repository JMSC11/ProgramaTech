#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "..\GestionCuentas\ListaDeCuentas.h"
#include "GUI_ADMINISTRADOR.h"
using namespace std;
#define ENTER 13
#define ATRAS 8
#define INTENTO 3

class Autenticacion {
public:
    Autenticacion();
    int iniciarSesion(ListaDeCuentas &lista);
    void registrarse(ListaDeCuentas &lista);
    int GUI_empresa();
    int GUI_administrador();
    int GUI_usuario();
    int GUI_especialista();
private:

};

//
// Constructor por defecto
//
Autenticacion::Autenticacion() {

}

//
// Iniciar Sesion
//
int Autenticacion::iniciarSesion(ListaDeCuentas &lista) {
    bool estado_inicio = false;
    int id;
    string usuario, password;
    system ("cls");
    cout << "\t\t\tLOGIN DE USUARIO" << endl;
    cout << "\t\t\t----------------" << endl;
    cout <<"\n\tUsuario: ";
    cin >> usuario;

    char caracter;

    cout <<"\tContrase\244a: ";
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
    id = lista.buscar(usuario, password);

    return id;
}

void Autenticacion::registrarse(ListaDeCuentas &lista)
{
    int edad;
    double telefono;
    string nombre, tipoCuenta, correo, usuario, password;
    int id = lista.getNumCuentas(); //OBTENEMOS UN ID DISPONIBLE PARA ASIGNAR A LA CUENTA.
    system("cls");
    cin.ignore();
    
    cout << "Seleccione un tipo de cuenta" << endl;
    cout << "1: Usuario normal" << endl;
    cout << "2: Empresa" << endl;
    cout << "3: Especialista" << endl;

    getline(cin,tipoCuenta);
    system("cls");
    cout << "\t\tFavor de ingresar los siguientes datos:" << endl;
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
    cuenta *c =  new cuenta(id, usuario, password, nombre, tipoCuenta, edad, correo, telefono);
    lista.registrar(c);
    system("pause");
}

int  Autenticacion::GUI_administrador(){
    GUI_ADMINISTRADOR gui;
    int op = gui.menuAdministrador(); 
    return op;
}
int Autenticacion::GUI_empresa(){
    return 0;
}
int Autenticacion::GUI_usuario(){
    return 0;
}
int Autenticacion::GUI_especialista(){
    return 0;
}