#include <iostream>
#include <stdlib.h>
#include <string>
#include "GUI_PRINCIPAL.h"
//#include "GestionDeAutenticacion/GUI_ADMINISTRADOR.h"
//#include "GestionCuentas\ListaDeCuentas.h"
#include "GestionDeAutenticacion\Autenticacion.h"

using namespace std;

void agregarAdministradores(ListaDeCuentas &lista_cuentas);

int main() {
    ListaDeCuentas lista_cuentas;
    bool estado_inicio=false;
    cuenta cuenta_actual;
    int id;
    string tipo_Cuenta;
    GUI_PRINCIPAL Gui;
    int opcion;
    agregarAdministradores(lista_cuentas);
    do
    {
        opcion = Gui.menuPrincipal();
        int opcion_menu, opcion_menu_admin;;
        //Autenticacion Aut2;
        Autenticacion Aut;
        estado_inicio=false;
        
        switch(opcion)
        {    
            case 1: 
                id=Aut.iniciarSesion(lista_cuentas);
                if (id!=0)
                {
                    system("cls");
                    //estado_inicio=true;
                    cout << "INICIO DE SESION EXITOSO" << endl;
                    //lista_cuentas.obtenerCuenta("DiegoV", "Prueba", cuenta_actual);
                    lista_cuentas.obtenerCuenta(id, cuenta_actual);
                    //cout << "La cuenta encontrada es: " << endl;
                    //cuenta_actual.mostrarCuenta();
                    tipo_Cuenta=cuenta_actual.gettipoCuenta();
                    if (tipo_Cuenta=="1")
                    {
                        cout << "\t\t\tBienvenido usuario!" << endl;
                        opcion_menu = Aut.GUI_usuario();
                        
                    }
                    else if(tipo_Cuenta == "2")
                    {
                        cout << "\t\t\tBienvenido Empresa!" << endl;
                        opcion_menu = Aut.GUI_empresa();
                        
                    }
                    else if(tipo_Cuenta == "3")
                    {
                        cout << "\t\t\tBienvenido Especialista!" << endl;
                        opcion_menu = Aut.GUI_especialista();
                        
                    }
                    else;//tipo_cuenta == 4
                    {
                        cout << "\t\t\tBienvenido Administrador!" << endl;
                        do{
                            opcion_menu = Aut.GUI_administrador();
                            switch(opcion_menu){
                            
                                case 1://Gestion de informacion
                                    cout << "1: Modificar informacion" << endl;
                                    cout << "2: Ver informacion" << endl;
                                    cin >> opcion_menu_admin;
                                break;
                                case 2://Gestion de cuentas
                                    cout << "1: Insertar" << endl;
                                    cout << "2: Eliminar" << endl;
                                    cout << "3: Modificar" << endl;
                                    cout << "4: Visuzalir cuentas" << endl;
                                    cout << "5: Buscar cuenta" << endl;
                                    cout << "6: Obtener total de cuentas" << endl;
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 4){
                                        lista_cuentas.mostrar("1");
                                    }
                                break;
                                case 3://Gestion de agenda
                                    cout << "1: Dar de alta" << endl;
                                    cout << "2: Dar de baja" << endl;
                                    cout << "3: Visualizar agenda" << endl;
                                    cout << "4: Buscar especialista" << endl;
                                    cin >> opcion_menu_admin;
                                break;
                                case 4://Gestion de publicaciones
                                    cout << "1: Visualizar publicaciones" << endl;
                                    cout << "2: Crear publicacion" << endl;
                                    cout << "3: Seleccionar publicacion" << endl;
                                    cout << "4: Eliminar publicacion" << endl;
                                    cout << "5: Modificar publicacion" << endl;
                                    cin >> opcion_menu_admin;
                                break;
                            }
                        
                        }while(opcion_menu < 5);
                    }

                    system("pause");
                }
                else
                {
                    system("cls");
                    cout <<endl<< "INICIO DE SESION NOOOOOOOOO EXITOSO";
                    system("pause");
                }
            break;
            case 2:
                
                Aut.registrarse(lista_cuentas);
            break;  
        }
    }while(opcion!=3);
    system("cls");
    //lista_cuentas.mostrar("1");
    cout << "Salida exitosa" << endl;
    system("pause");
    return 0;
}







void agregarAdministradores(ListaDeCuentas &lista_cuentas){
    cuenta *c = new cuenta (1,"Daniel21", "Prueba21", "Daniel Caparroso Gutierrez", "4", 22, "2193035668@cua.uam.mx", "5587650318");
    lista_cuentas.registrar(c);
    c = new cuenta (2,"Misael", "0000", "Misael Solano Contreras", "4", 22, "2193037862@cua.uam.mx", "5698647810");
    lista_cuentas.registrar(c);
    c = new cuenta (3,"Mau", "1111", "Mauricio Estrada Soto", "4", 20, "2193039825@cua.uam.mx", "5586033492");
    lista_cuentas.registrar(c);
    c = new cuenta (4,"DiegoV", "Prueba", "Diego Uriel Vazquez Ramirez", "4", 20, "2193036227@cua.uam.mx", "5574920392");
    lista_cuentas.registrar(c);
}