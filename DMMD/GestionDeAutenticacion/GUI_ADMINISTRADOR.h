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
    cout << "\t\tMenu" << endl;
    cout << "| 1: Gestion de informacion " << endl;
    cout << "+" << endl;
    cout << "| 2: Gestion de cuentas " << endl;
    cout << "+" << endl;
    cout << "| 3: Gestion de agenda " << endl;
    cout << "+" << endl;
    cout << "| 4: Gestion de publicaciones " << endl;
    cout << "+" << endl;
    cout << "| 5: Gestion de suscrpcion " << endl;
    cout << "+" << endl;
    cout << "| 6: Salir" << endl;
    cout << "+" << endl;
    cout << "|-> Selecciona una opcion: ";
    cin >> opcion;
    while(opcion  < 1 || opcion > 6){
        cout << "Ingresa una opcion valida: ";
        cin >> opcion;
    }
    return opcion;
}
