#include <iostream>
using namespace std;

class GUI_PRINCIPAL {
private:
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
    int opcion;
    do
    {
        system("cls");
        cout << "Elige una opcion: "<<endl;
        cout << "1: Iniciar sesion"<<endl;
        cout << "2: Registrarse" << endl;
        cout << "3: Salir";
        cin >> opcion;
    }while(opcion>3 && opcion<1);
    return opcion;
}