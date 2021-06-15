#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "..\GestionCuentas\ListaDeCuentas.h"
using namespace std;
#define ENTER 13
#define ATRAS 8
#define INTENTO 3

class Autenticacion {
public:
    Autenticacion();
    cuenta* iniciarSesion(ListaDeCuentas &lista);
    void registrarse(ListaDeCuentas &lista);
    void GUI_EMPRESA();
    void GUI_ADMINISTRADOR();
    void GUI_USUARIO();
    void GUI_ESPECIALISTA();
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
cuenta* Autenticacion::iniciarSesion(ListaDeCuentas &lista) {
    bool estado_inicio = false;
    cuenta *c;
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
    c = lista.buscar(usuario, password);
    return c;
}

void Autenticacion::registrarse(ListaDeCuentas &lista)
{
    int edad;
    double telefono;
    string nombre, tipoCuenta, correo, usuario, password;
    int id = lista.getNumCuentas(); //OBTENEMOS UN ID DISPONIBLE PARA ASIGNAR A LA CUENTA.
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
    lista.registrar(c);
    system("pause");

}