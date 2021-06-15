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

        int getTelefono();
        void setTelefono(double telefono);
};

cuenta::cuenta(){

}


cuenta::cuenta(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono){
        cuenta::id = id;
        cuenta::usuario = usuario;
        cuenta::password = password;
        cuenta::nombre = nombre;
        cuenta::tipoCuenta = tipoCuenta;
        cuenta::edad = edad;
        cuenta::correo = correo;
        cuenta::telefono = telefono;
}

cuenta::~cuenta(){

}

void cuenta::mostrarC()
{
    cout << cuenta::id << " ";
    cout << cuenta::nombre << endl;

}

void cuenta::mostrarCuenta(){
    cout << cuenta::id << endl;
    cout << cuenta::usuario << endl;
    cout << cuenta::password << endl;
    cout << cuenta::nombre << endl;
    cout << cuenta::tipoCuenta << endl;
    cout << cuenta::edad << endl;
    cout << cuenta::correo << endl;
    cout << cuenta::telefono << endl;
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

int cuenta::getTelefono(){
        return telefono;
}
<<<<<<< HEAD
<<<<<<< HEAD
void cuenta::setTelefono(int telefono){
        cuenta::telefono = telefono;
=======
=======
>>>>>>> 4bb31a724c7bcb5ec0466a3b154e582f07aadbc1
void cuenta::setTelefono(double telefono){
        telefono = telefono;
>>>>>>> 8cbc14f3cfb61de5b6f041d304163c4654b1efcf
};
