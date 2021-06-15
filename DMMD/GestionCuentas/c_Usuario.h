#include <iostream>
#include <string>
#include "cuenta.h"
class c_Usuario : public cuenta{
    private:
    
    public:
        c_Usuario(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono);
        void mostrarDatosUsuario();
};

c_Usuario::c_Usuario(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono) : cuenta(id,  usuario,  password,  nombre,  tipoCuenta, edad,  correo,  telefono){

}

void c_Usuario::mostrarDatosUsuario(){
    mostrarCuenta();
}