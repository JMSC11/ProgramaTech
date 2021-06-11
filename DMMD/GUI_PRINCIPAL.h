#include <iostream>
using namespace std;

class GUI_PRINCIPAL {
private:
    int opcion;//NUEVO ATRIBUTO
public: 
    GUI_PRINCIPAL();
    int menuPrincipal();
};

GUI_PRINCIPAL::GUI_PRINCIPAL(){

}
// 
// Menu principal del sistema
// Permite iniciar sesion o registrarse
// 
int GUI_PRINCIPAL::menuPrincipal(){
    cout << "\t| Bienvenido a DMMD |" << endl;
    cout << "" << endl;
    cout << "Accion a realizar: ";
}