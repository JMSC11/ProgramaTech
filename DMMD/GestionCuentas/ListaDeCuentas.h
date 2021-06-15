#include <list>
#include "cuenta.h"

class ListaDeCuentas {
private:
    int contCuentas;
    list<cuenta> listaCuentas;
public:
    ListaDeCuentas();
    void registrar(cuenta *c);
    cuenta* buscar(string usuario, string contrasena);
    bool eliminar(cuenta c);
    bool modificar(cuenta *c);
    void mostrar(string tipoCuenta);
    int getNumCuentas();
};


// 
// Constructor
// 
ListaDeCuentas::ListaDeCuentas(){    
    contCuentas = 0;
}

void ListaDeCuentas::registrar(cuenta *c){
    listaCuentas.insert(listaCuentas.end(), *c);
        
}


// 
// Buscar es equivalente a iniciar sesion
// 
cuenta* ListaDeCuentas::buscar(string usuario, string contrasena){
    bool existeCuenta = false;
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;
    
    cuenta c = *it;
    cuenta *d;

    while(i < contCuentas && !existeCuenta){
        if(c.getUsuario() == usuario){
            if(c.getPassword() == contrasena)
            {
                existeCuenta = true;
                d=listaCuentas.get_allocator().allocate(i);
                system("pause");
            }
            else
            {
                d=NULL;
            }
        }
        else
        {
                d=NULL;
        }
        it++;
        i++;
    }
    
    return d;
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