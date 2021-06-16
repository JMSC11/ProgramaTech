#include <list>
#include "Publicacion.h"
class ListaDePublicaciones{
private:
    int numPublicaciones;
    list<publicacion> listaPublicaciones;
public:
    ListaDePublicaciones();
    void insertar();
    void eliminar();
    void buscar();
    void mostrar();
    int getNumPublicaciones();
};
ListaDePublicaciones::ListaDePublicaciones(){
    numPublicaciones = 0;
}
void ListaDePublicaciones::insertar(){
}
void ListaDePublicaciones::eliminar(){
}
void ListaDePublicaciones::buscar(){
}
void ListaDePublicaciones::ostrar(){
}

int ListaDePublicaciones::getNumPublicaciones(){
    return numPublicaciones;
}