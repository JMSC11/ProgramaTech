#include <list>
#include "Solicitud.h"
class ListaDeSolicitudes {
        private:
            int numSolicitudes;
            list <Solicitud> listaSolicitudes;
        public:
            ListaDeSolicitudes();
            void buscar();
            void insertar(Solicitud i_solicitud);
            void eliminar();
            void mostrar();
            int getNumSolicitudes();
};
ListaDeSolicitudes::ListaDeSolicitudes(){
}
void ListaDeSolicitudes::buscar(){
}
void ListaDeSolicitudes::insertar(Solicitud i_solicitud){
}
void ListaDeSolicitudes::eliminar(){
}
void ListaDeSolicitudes::mostrar(){
}
int ListaDeSolicitudes::getNumSolicitudes(){
}