#include <iostream>
using namespace std;

class GUI_EMPRESA{
private:

public:
    GUI_EMPRESA();
    int menuEmpresa();
};

GUI_EMPRESA::GUI_EMPRESA(){
}

int GUI_EMPRESA::menuEmpresa(){
    int opcion;
    cout << "| 1: Gestion informacion " << endl;
    cout << "| 2: Gestion de solicitudes " << endl;
    cout << "| 3: Gestion de agenda " << endl;
    cout << "| 4: Gestion de publicaciones " << endl;
    cout << "| 5: Gestion de suscripcion " << endl;
    cout << "| 6: Salir" << endl;
    cout << "| Selecciona una opcion: " << endl;
    cin >> opcion;
    while(opcion  < 1 || opcion > 6){
        cout << "Ingresa una opcion valida: " << endl;
        cin >> opcion;
    }
    return opcion;
}
