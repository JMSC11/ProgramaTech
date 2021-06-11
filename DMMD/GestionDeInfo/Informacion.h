#include <iostream>
#include <string>
#include "cuenta.h"
using namespace std;
class Informacion{
    private:
        cuenta *cuenta_actual;
    public:
        Informacion();
        void modificarInfo(cuenta *cuenta_actual);
        void verInfo(cuenta *cuenta_actual);
};

Informacion::Informacion(){
}

void Informacion::modificarInfo(cuenta *cuenta_actual){
        cout<<"Los datos iniciales son:"<<endl;
        cuenta_actual->getDatos();
        cout<<"Correguimos datos:"<<endl;
        cuenta_actual->setDatos();
}

void Informacion::verInfo(cuenta *cuenta_actual){
    cout<<"La informacion de la cuenta es:"<<endl;
    cuenta_actual->getDatos();
}