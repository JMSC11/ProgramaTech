#include <iostream>
#include <string>
using namespace std;

class publicacion{
    private:
        int idPublicacion;
        string asunto;
        string descripcion;
        string nombrePropietario;
    public:
        publicacion();
        publicacion(int, string, string, string );
        ~publicacion();
        int getIdPublicacion();
        void setIdPublicacion(int id);
        string getAsunto();
        void setAsunto(string asunto);
        string getDescripcion();
        void setDescripcion(string descripcion);
        string getNombrePropietario();
        void setNombrePropietario(string nombre);
        void mostrarPublicacion();
};

publicacion::publicacion(){

}
publicacion::publicacion(int id, string asunto, string descripcion, string nombre){
    publicacion::idPublicacion=id;
    publicacion::asunto=asunto;
    publicacion::descripcion=descripcion;
    publicacion::nombrePropietario=nombre;
}
publicacion::~publicacion(){

}

int publicacion::getIdPublicacion(){
    return idPublicacion;
}
void publicacion::setIdPublicacion(int id){
    publicacion::idPublicacion = id;
}

string publicacion::getAsunto(){
    return asunto;
}
void publicacion::setAsunto(string asunto){
    publicacion::asunto=asunto;
}
string publicacion::getDescripcion(){
    return descripcion;
}
void publicacion::setDescripcion(string descripcion){
    publicacion::descripcion=descripcion;
}
string publicacion::getNombrePropietario(){
    return nombrePropietario;
}
void publicacion::setNombrePropietario(string nombre){
    publicacion::nombrePropietario=nombre;
}

void publicacion::mostrarPublicacion(){
    cout<<"Id publicacion: "<<idPublicacion<<endl;
    cout<<"Propietario: "<<nombrePropietario<<endl;
    cout<<"Asunto:: "<<asunto<<endl;
    cout<<"Descripcion: "<<descripcion<<endl;
}

