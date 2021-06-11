//Clase Cuenta
#include <iostream>
#include <string>
using namespace std;
//Clase base, la cual hereda a c_especialista, c_administrador, c_usuario, c_empresa
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
        cuenta();
        cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, int telefono);
        ~cuenta();

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
        void setTelefono(int telefono);
};
cuenta::cuenta(){

}

cuenta::cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, int telefono){
        id = id;
        usuario = usuario;
        password = password;
        nombre = nombre;
        tipoCuenta = tipoCuenta;
        edad = edad;
        correo = correo;
        telefono = telefono;
}

cuenta::~cuenta(){

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
void cuenta::setTelefono(int telefono){
        telefono = telefono;
};