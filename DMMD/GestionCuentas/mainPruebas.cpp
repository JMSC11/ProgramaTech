#include <iostream>
#include "ListaDeCuentas.h"
// #include "..\GestionDeInfo\Informacion.h"

using namespace std;

int main() {
    //cout << "Itto" << endl;
    ListaDeCuentas lCuentas;
    cuenta *c =  new cuenta(1, "diego", "123", "Diego Uriel", "Admin", 20, "ejemplo.com", 01234);
    lCuentas.registrar(c);
    lCuentas.mostrar("1");
    return 0;
}