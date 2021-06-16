#include <iostream>
#include <string>
// #include "..\GestionCuentas\cuenta.h"
using namespace std;
class Informacion{
    private:
        cuenta *cuenta_actual;
    public:
        Informacion();
        void modificarInformacion(cuenta &cuenta_actual);
        void verInformacion(cuenta cuenta_actual);
};

Informacion::Informacion(){
}

void Informacion::modificarInformacion(cuenta &cuenta_actual){
        cout<<"Los datos iniciales son:"<<endl;
        //cuenta_actual->getDatos();
        cout<<"Correguimos datos:"<<endl;
        //cuenta_actual->setDatos();
}

void Informacion::verInformacion(cuenta cuenta_actual){
    cout<<"La informacion de la cuenta es:"<<endl;
    //cuenta_actual->getDatos();
    cuenta_actual.mostrarCuenta();
}