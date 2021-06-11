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
        double telefono;
    public:
        cuenta();
        cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono);
        ~cuenta();
        void mostrarC();

        int getId();
        void setId(int id);

        string getUsuario();
        void setUsuario(string usuario);

        string getPasswword();
        void setPassword(string password);

        string getNombre();
        void setNombre(string nombre);

        string gettipoCuenta();
        void settipoCuenta(string tipoCuenta);

        int getEdad();
        void setEdad(int edad);

        string getCorreo();
        void setCorreo(string correo);

        int getTelefono();
        void setTelefono(double telefono);
};

cuenta::cuenta(){

}

cuenta::~cuenta(){

}

cuenta::cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono)
{
    cuenta::id = id;
    cuenta::usuario = usuario;
    cuenta::password = password;
    cuenta::nombre = nombre;
    cuenta::tipoCuenta = tipoCuenta;
    cuenta::edad = edad;
    cuenta::correo = correo;
    cuenta::telefono = telefono;
}

void cuenta::mostrarC()
{
    cout << cuenta::id << " ";
    cout << cuenta::nombre << endl;
    
}

int cuenta::getId(){
        return id;
}
void cuenta::setId(int id){
        id = id;
}

string cuenta::getUsuario(){
       return usuario;
}
void cuenta::setUsuario(string usuario){
        usuario = usuario;
}

string cuenta::getPasswword(){
       return password;
}
void cuenta::setPassword(string password){
        password = password;
}

string cuenta::getNombre(){
       return nombre;
}
void cuenta::setNombre(string nombre){
        nombre = nombre;
}

string cuenta::gettipoCuenta(){
       return tipoCuenta;
}
void cuenta::settipoCuenta(string tipoCuenta){
        tipoCuenta = tipoCuenta;
}

int cuenta::getEdad(){
        return edad;
}
void cuenta::setEdad(int edad){
        edad = edad;
}

string cuenta::getCorreo(){
       return correo;
}
void cuenta::setCorreo(string correo){
        correo = correo;
}

int cuenta::getTelefono(){
        return telefono;
}
void cuenta::setTelefono(double telefono){
        telefono = telefono;
};