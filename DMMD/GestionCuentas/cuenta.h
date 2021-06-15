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
        string telefono;
    public:
        cuenta();
        cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, string telefono);
        ~cuenta();


        void mostrarCuenta();

        void mostrarC();


        int getId();
        void setId(int id);

        string getUsuario();
        void setUsuario(string usuario);

        string getPassword();
        void setPassword(string password);

        string getNombre();
        void setNombre(string nombre);

        string gettipoCuenta();
        void settipoCuenta(string tipoCuenta);

        int getEdad();
        void setEdad(int edad);

        string getCorreo();
        void setCorreo(string correo);

        string getTelefono();
        void setTelefono(string telefono);
};

cuenta::cuenta(){

}


cuenta::cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, string telefono){
        cuenta::id = id;
        cuenta::usuario = usuario;
        cuenta::password = password;
        cuenta::nombre = nombre;
        cuenta::tipoCuenta = tipoCuenta;
        cuenta::edad = edad;
        cuenta::correo = correo;
        cuenta::telefono = telefono ;
}

cuenta::~cuenta(){

}

void cuenta::mostrarC() //Mostrar Contacto
{
    cout << cuenta::id << " ";
    cout << cuenta::nombre << endl;

}

void cuenta::mostrarCuenta(){
    cout << "ID: " << cuenta::id << endl;
    cout << "Usuario: "<< cuenta::usuario << endl;
    //cout << cuenta::password << endl;
    cout << "Nombre:  " << cuenta::nombre << endl;
    cout << "Tipo de cuenta: " << cuenta::tipoCuenta << endl;
    cout << "Edad: " << cuenta::edad << endl;
    cout << "Correo: " << cuenta::correo << endl;
    cout << "Telefono: " << cuenta::telefono << endl << endl;
}


int cuenta::getId(){
        return id;
}
void cuenta::setId(int id){
        cuenta::id = id;
}

string cuenta::getUsuario(){
       return usuario;
}
void cuenta::setUsuario(string usuario){
        cuenta::usuario = usuario;
}

string cuenta::getPassword(){
       return password;
}
void cuenta::setPassword(string password){
        cuenta::password = password;
}

string cuenta::getNombre(){
       return nombre;
}
void cuenta::setNombre(string nombre){
        cuenta::nombre = nombre;
}

string cuenta::gettipoCuenta(){
       return tipoCuenta;
}
void cuenta::settipoCuenta(string tipoCuenta){
        cuenta::tipoCuenta = tipoCuenta;
}

int cuenta::getEdad(){
        return edad;
}
void cuenta::setEdad(int edad){
        cuenta::edad = edad;
}

string cuenta::getCorreo(){
       return correo;
}
void cuenta::setCorreo(string correo){
        cuenta::correo = correo;
}

string cuenta::getTelefono(){
        return telefono;
}

void cuenta::setTelefono(string telefono){
        telefono = telefono;
};
