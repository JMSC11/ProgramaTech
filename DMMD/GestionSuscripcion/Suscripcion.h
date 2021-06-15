#include <iostream>
#include <string>
using namespace std;


class Suscripcion{
    private:
        int id;
        int fechaInicio;
        int fechaCorte;
        bool suscrito;
    public:
        Suscripcion();
        Suscripcion(int id, int fechaInicio, int fechaCorte, bool suscrito);
        ~Suscripcion();
        void mostrarDatos();
        bool getSuscrito();
        void setSuscrito(bool suscrito);
        int getId();
        void setId(int id);   
};

Suscripcion::Suscripcion(){

}

Suscripcion::Suscripcion(int id, int fechaInicio, int fechaCorte, bool suscrito){
        Suscripcion::id = id;
        Suscripcion::fechaInicio = fechaInicio;
        Suscripcion::fechaCorte = fechaCorte;
        Suscripcion::suscrito = suscrito;
}

Suscripcion::~Suscripcion(){

}

void Suscripcion::mostrarDatos(){
    cout << "ID: " << Suscripcion::id << endl;
    cout << "Fecha de inicio: "<< Suscripcion::fechaInicio << endl;
    cout << "Fecha de corte:  " << Suscripcion::fechaCorte << endl;
    cout << "Estado de suscripcion: " << Suscripcion::suscrito << endl;
}


bool Suscripcion::getSuscrito(){
        return suscrito;
}

void Suscripcion::setSuscrito(bool suscrito){
        Suscripcion::suscrito = suscrito;
}

int Suscripcion::getId(){
        return id;
}

void Suscripcion::setId(int id){
        Suscripcion::id = id;
}