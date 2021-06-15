#include <iostream>
#include <string>
#include "cuenta.h"
using namespace std;
//Clase Administrador hereda de la  clase Cuenta
class c_Administrador : public cuenta
{
    //atributos de C_ADMIN
    private:
        int numEmpleado;
    public:
        c_Administrador(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, int numEmpleado);
        void setNumEmpleado(int empleado);
        int getNumEmpleado();
        void mostrarDatosAdmin();
};

c_Administrador::c_Administrador(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, int numEmpleado) : cuenta(int id,  usuario,  password,  nombre,  tipoCuenta, it edad,  correo,  telefono){
    c_Administrador::numEmpleado =numEmpleado;
}

void c_Administrador::setNumEmpleado(int empleado){
    c_Administrador:: numEmpleado = empleado;
}

int c_Administrador::getNumEmpleado(){
    return numEmpleado;
}

void c_Administrador::mostrarDatosAdmin(){
    mostrarCuenta();
    cout<<getNumEmpleado();
    
}


