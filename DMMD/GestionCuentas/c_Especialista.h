#include <iostream>
#include <string>
#include "cuenta.h"
class c_Especialista : public cuenta{
    private:
        string areaEspecializacion;
        int reputacion;
    public:
        c_Especialista(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, string areaEspecializacion, int reputacion);
        void setareaEspecializacion(string areaEspecializacion);
        string getAreaEspecializacion();
        void setReputacion(int reputacion);
        int getReputacion();
        void mostrarDatosEspecialista();

};

c_Especialista::c_Especialista(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, string areaEspecializacion, int reputacion) : cuenta(id,  usuario,  password,  nombre,  tipoCuenta, edad,  correo,  telefono){
    c_Especialista::areaEspecializacion;
    c_Especialista::reputacion;
}

void c_Especialista::setareaEspecializacion(string areaEspecializacion){
    c_Especialista::areaEspecializacion=areaEspecializacion;
}

string c_Especialista::getAreaEspecializacion(){
    return areaEspecializacion;
}

void c_Especialista::setReputacion(int reputacion){
    c_Especialista::reputacion=reputacion;
}

void c_Especialista::mostrarDatosEspecialista(){
    mostrarCuenta();
    cout<<getAreaEspecializacion()<<endl;
    cout<<getReputacion()<<endl;
}