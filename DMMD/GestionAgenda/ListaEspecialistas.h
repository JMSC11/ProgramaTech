#include <list>
#include <vector>
#include "cuenta.h"

using namespace std;

class listaEspecialista{
    private:
        int numEspecialistas;
        int* inicio;
        list<cuenta> listaEspec;
    public:
        listaEspecialista();
        int* buscar();
        void actualizar();
        void agregar(cuenta especialista);
        void eliminar();
        void mostrar();
        
};

listaEspecialista::listaEspecialista()
{
	numEspecialistas = 0;
	inicio=0;
}

void listaEspecialista::agregar(cuenta especialista)
{
	listaEspec.insert(listaEspec.end(), especialista);
	numEspecialistas++;
}

void listaEspecialista::mostrar()
{
    list<cuenta>::iterator it = listaEspec.begin();
    for (int i = 0; i < numEspecialistas; i++)
    {
        cuenta C = *it;
        C.mostrarC();
        it++;
    }
}