#include <iostream>
using namespace std;


class GUI_ADMINISTRADOR{
private:
    
public:
    GUI_ADMINISTRADOR();
    int menuAdministrador();
};

GUI_ADMINISTRADOR::GUI_ADMINISTRADOR(){
    
}
int GUI_ADMINISTRADOR::menuAdministrador(){
    int opcion;
    cout << "Selecciona una opcion: " << endl;
    cout << "1: Gestion informacion " << endl;
    cout << "2: Gestion de cuentas " << endl;
    cout << "3: Gestion de agenda " << endl;
    cout << "4: Gestion de publicaciones " << endl;
    cout << "5: Salir" << endl;
    cin >> opcion;
    while(opcion  < 0 || opcion > 5){
        cout << "Ingresa una opcion valida: " << endl;
        cin >> opcion;
    }
    return opcion;
}