#include <list>
#include "cuenta.h"

class ListaDeCuentas {
private:
    int contCuentas;
    list<cuenta> listaCuentas;
public:
    ListaDeCuentas();
    void registrar(cuenta *c);
    bool buscar(string usuario, string contrasena);
    bool eliminar(cuenta c);
    bool modificar(cuenta *c);
    void mostrar(string tipoCuenta);
    int getNumCuentas();
    void obtenerCuenta(string usuario, string contrasena, cuenta &c);
};


// 
// Constructor
// 
ListaDeCuentas::ListaDeCuentas(){    
    contCuentas = 0;
}

void ListaDeCuentas::registrar(cuenta *c){
    listaCuentas.insert(listaCuentas.end(), *c);
    contCuentas++;    
}


// 
// Buscar es equivalente a iniciar sesion
// 
bool ListaDeCuentas::buscar(string usuario, string contrasena){
    bool existeCuenta = false;
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;

    while(i < contCuentas && !existeCuenta){
        cuenta c = *it;
        if(c.getUsuario() == usuario&&c.getPassword() == contrasena){
            existeCuenta = true;
            //d=listaCuentas.get_allocator().allocate(i);
            //system("pause");
        }
        it++;
        i++;
    }
    
    return existeCuenta;
}

// 
// Buscar es equivalente a iniciar sesion
//
bool ListaDeCuentas::eliminar(cuenta c){
    list<cuenta>::iterator it = listaCuentas.begin();
    for(int i = 0; i < contCuentas; i++){
        cuenta c = *it;
        // c.mostrarCuenta();
        it++;
    }
    return true;
}

void ListaDeCuentas::mostrar(string tipoCuenta){
    list<cuenta>::iterator it = listaCuentas.begin();
    for(int i = 0; i < contCuentas; i++){
        cuenta c = *it;
        c.mostrarCuenta();
        it++;
    }
}

int ListaDeCuentas::getNumCuentas()
{
    return contCuentas+1;
}

void ListaDeCuentas::obtenerCuenta(string usuario, string contrasena, cuenta &c){
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;
    bool existeCuenta = false;

    while(i < contCuentas && !existeCuenta){
        if(it->getUsuario() == usuario && it->getPassword() == contrasena){
                existeCuenta = true;
                c = *it;
                //d=listaCuentas.get_allocator().allocate(i);
        }     
        it++;
        i++;
    }
}