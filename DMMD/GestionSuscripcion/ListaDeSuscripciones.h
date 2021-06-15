#include <list>
#include "Suscripcion.h"

class ListaDeSuscripcion {
private:
    int numSuscriptores;
    list <Suscripcion> listaSuscriptores;
public:
    ListaDeSuscripcion();
    void insertar(Suscripcion *s);
    int buscar(int id, bool suscrito);
    bool eliminar(Suscripcion s);
    void mostrar(string tipoSuscripcion);
};

// 
// Constructor
// 
ListaDeSuscripcion::ListaDeSuscripcion(){    
    numSuscriptores = 0;
}

void ListaDeSuscripcion::insertar(Suscripcion *s){
    listaSuscriptores.insert(listaSuscriptores.end(), *s);
    numSuscriptores++;    
}


// 
// Buscar es equivalente a iniciar sesion
// 
int ListaDeSuscripcion::buscar(int id, bool suscrito){
    bool existeSuscripcion = false;
    list<Suscripcion>::iterator it = listaSuscriptores.begin();
    int i = 0;
    int x =0;

    while(x < numSuscriptores && !existeSuscripcion){
        Suscripcion s = *it;
        if(s.getSuscrito() == 1 && s.getId() == id){
            existeSuscripcion = true;
            i = it->getId();
        }
        else
        {
            i=0;
        }
        it++;
        x++;
    }
    
    return i;
}

// 
// Buscar es equivalente a iniciar sesion
//
bool ListaDeSuscripcion::eliminar(Suscripcion s){
    list<Suscripcion>::iterator it = listaSuscriptores.begin();
    for(int i = 0; i < numSuscriptores; i++){
        Suscripcion s = *it;
        // c.mostrarCuenta();
        it++;
    }
    return true;
}

void ListaDeSuscripcion::mostrar(string tipoSuscripcion){
    list<Suscripcion>::iterator it = listaSuscriptores.begin();
    for(int i = 0; i < numSuscriptores; i++){
        Suscripcion s = *it;
        s.mostrarDatos();
        it++;
    }
}