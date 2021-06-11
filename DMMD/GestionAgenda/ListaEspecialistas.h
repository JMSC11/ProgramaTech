#include <list>
#include "..\GestionCuentas\cuenta.h"

class listaEspecialista{
    private:
        int numEspecialistas;
        int* inicio;
        std::list<cuenta> listaEspec;
    public:
        listaEspecialista();
        ~listaEspecialista();
        int* buscar();
        void actualizar();
        void agregar();
        void eliminar();
        void mostrar();
        
};

listaEspecialista::listaEspecialista()
{
	numEspecialistas = 0;
	inicio=0;
}

void listaEspecialista::agregar()
{
	listaEspec.insert(listaEspec.end(), cuenta especialista);
	numEspecialistas++;
}

void listaEspecialista::eliminar()
{
	
}