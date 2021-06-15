#include <list>
#include "cuenta.h"

class ListaDeCuentas {
private:
    int contCuentas;
    list<cuenta> listaCuentas;
public:
    ListaDeCuentas();
    void registrar(cuenta *c);
    cuenta buscar(string usuario, string contrasena);
    bool eliminar(cuenta c);
    bool modificar(cuenta *c);
    void mostrar(string tipoCuenta);
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
cuenta ListaDeCuentas::buscar(string usuario, string contrasena){
    bool existeCuenta = false;
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;
    cuenta c = *it;
    
    while(i < contCuentas && !existeCuenta){
        if(c.getUsuario() == usuario){
            if(c.getPassword() == contrasena)
                existeCuenta = true;
        }
        it++;
        i++;
    }
    return c;
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
