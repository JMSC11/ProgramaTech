#include <iostream>
using namespace std;

class Autenticacion {
public:
    Autenticacion();
    void iniciarSesion();
    void registrarse();
    void GUI_EMPRESA();
    void GUI_ADMINISTRADOR();
    void GUI_USUARIO();
    void GUI_ESPECIALISTA();
private:
    string nombreUsuario;//NUEVO ATRIBUTO
    string contrasena;//NUEVO ATRIBUTO

};

//
// Constructor por defecto
//
Autenticacion::Autenticacion() {
    nombreUsuario = "";
    contrasena = "";
}

//
// Iniciar Sesion
//
void Autenticacion::iniciarSesion() {
    cout << endl;
    cout << "\t| Iniciar sesion |" << endl;
    cout << "Ingresa tu nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingresar constrasena: ";
    cin >> contrasena;
    // buscar en lista de cuentas
    // if(ListadeCuentas.buscar()) {
    //
    // }
}
