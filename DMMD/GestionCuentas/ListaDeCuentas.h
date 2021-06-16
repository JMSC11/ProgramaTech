#include <list>
#include "cuenta.h"
// #include "..\GestionDeInfo\Informacion.h"
class ListaDeCuentas {
private:
    int contCuentas;
    list<cuenta> listaCuentas;
public:
    ListaDeCuentas();
    void registrar(cuenta *c);
    int buscar(string usuario, string contrasena);
    bool eliminar(cuenta c);
    bool modificar(cuenta *c);
    void mostrar(string tipoCuenta);
    int getNumCuentas();
    void obtenerCuenta(int id, cuenta &c);
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
int ListaDeCuentas::buscar(string usuario, string contrasena){
    bool existeCuenta = false;
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;
    int x =0;

    while(x < contCuentas && !existeCuenta){
        cuenta c = *it;
        if(c.getUsuario() == usuario&&c.getPassword() == contrasena){
            existeCuenta = true;
            i = it->getId();
            //d=listaCuentas.get_allocator().allocate(i);
            //system("pause");
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

void ListaDeCuentas::obtenerCuenta(int id, cuenta &c){
    list<cuenta>::iterator it = listaCuentas.begin();
    int i = 0;
    bool existeCuenta = false;

    while(i < contCuentas){
        if(it->getId() == id){
                existeCuenta = true;
                c = *it;
                //d=listaCuentas.get_allocator().allocate(i);
        }     
        it++;
        i++;
    }
}