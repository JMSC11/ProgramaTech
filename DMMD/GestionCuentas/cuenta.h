//Clase Cuenta
#include <iostream>
#include <string>
using namespace std;
class cuenta{
    private:
        int id;
        string usuario;
        string password;
        string nombre;
        string tipoCuenta;
        int edad;
        string correo;
        int telefono;
    public:
        cuenta(){

        }
        cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, int telefono){
            id = id;
            usuario = usuario;
            password = password;
            nombre = nombre;
            tipoCuenta = tipoCuenta;
            edad = edad;
            correo = correo;
            telefono = telefono;
        }

        ~cuenta();
};