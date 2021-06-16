#include <iostream>
#include <stdlib.h>
#include <string>
#include "GUI_PRINCIPAL.h"
#include "GestionDeAutenticacion\Autenticacion.h"

using namespace std;

void agregarAdministradores(ListaDeCuentas &lista_cuentas);

int main() {
    ListaDeCuentas lista_cuentas;
    //bool estado_inicio=false;
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
        Informacion info;
        //estado_oinicio=false;

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
                    tipo_Cuenta=cuenta_actual.gettipoCuenta();//Obtenemos el tipo de cuenta para acceder a su propio menu
                    if (tipo_Cuenta == "1")
                    {
                        cout << "\t\t\tBienvenido usuario!" << endl;
                        do{
                            opcion_menu = Aut.GUI_usuario();
                            system("cls");
                            switch(opcion_menu){

                                case 1://Gestion de informacion

                                    cout << "\t| 1: Ver informacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVer mi informacion" << endl;
                                        
                                        info.verInformacion(cuenta_actual);
                                        //cuenta_actual.mostrarCuenta();
                                        system("pause");
                                    }
                                break;
                                case 2://Gestion de solicitudes
                                    cout << "\t| 1: Visualizar solicitudes" << endl;
                                    cout << "\t| 2: Enviar solicitud" << endl;
                                    cout << "\t| 3: ELiminar solicitud" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar solicitudes" << endl;
                                        system("pause");
                                    }
                                    else if(opcion_menu_admin == 2){
                                        cout << "\n\tEnviar solicitud" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tEliminar solicitud" << endl;
                                        system("pause");
                                    }
                                break;
                                case 3://Gestion de agenda
                                    cout << "\t| 1: Visualizar agenda" << endl;
                                    cout << "\t| 2: Buscar especialista" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar lista de especialistas" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tBuscar un especialista" << endl;
                                        system("pause");
                                    }
                                break;
                                case 4://Gestion de publicaciones
                                    cout << "\t| 1: Visualizar publicaciones" << endl;
                                    cout << "\t| 2: Crear publicacion" << endl;
                                    cout << "\t| 3: Seleccionar publicacion" << endl;
                                    cout << "\t| 4: Eliminar publicacion" << endl;
                                    cout << "\t| 5: Modificar publicacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                                case 5://Gestion de suscripcion
                                    cout << "\t| 1: Cancelar suscripcion" << endl;
                                    cout << "\t| 2: Ver informacion de suscripcion" << endl;
                                    cout << "\t| 3: Realizar pago" << endl;;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                            }

                        }while(opcion_menu < 5);


                    }
                    else if(tipo_Cuenta == "2")
                    {
                        cout << "\t\t\tBienvenido Empresa!" << endl;
                        do{
                            opcion_menu = Aut.GUI_empresa();
                            system("cls");
                            switch(opcion_menu){

                                case 1://Gestion de informacion
                                    cout << "\t| 1: Ver informacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVer mi informacion" << endl;
                                        //cuenta_actual.mostrarCuenta();
                                        info.verInformacion(cuenta_actual);
                                        system("pause");
                                    }
                                break;
                                case 2://Gestion de solicitudes
                                    cout << "\t| 1: Visualizar solicitudes" << endl;
                                    cout << "\t| 2: Enviar solicitud" << endl;
                                    cout << "\t| 3: ELiminar solicitud" << endl;
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar solicitudes" << endl;
                                        system("pause");
                                    }
                                    else if(opcion_menu_admin == 2){
                                        cout << "\n\tEnviar solicitud" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tEliminar solicitud" << endl;
                                        system("pause");
                                    }
                                break;
                                case 3://Gestion de agenda
                                    cout << "\t| 1: Visualizar agenda" << endl;
                                    cout << "\t| 2: Buscar especialista" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar lista de especialistas" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tBuscar un especialista" << endl;
                                        system("pause");
                                    }
                                break;
                                case 4://Gestion de publicaciones
                                    cout << "\t| 1: Visualizar publicaciones" << endl;
                                    cout << "\t| 2: Crear publicacion" << endl;
                                    cout << "\t| 3: Seleccionar publicacion" << endl;
                                    cout << "\t| 4: Eliminar publicacion" << endl;
                                    cout << "\t| 5: Modificar publicacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                                case 5://Gestion de suscripcion
                                    cout << "\t| 1: Cancelar suscripcion" << endl;
                                    cout << "\t| 2: Ver informacion de suscripcion" << endl;
                                    cout << "\t| 3: Realizar pago" << endl;;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                            }

                        }while(opcion_menu < 5);

                    }
                    else if(tipo_Cuenta == "3")
                    {
                        cout << "\t\t\tBienvenido Especialista!" << endl;
                        do{
                            opcion_menu = Aut.GUI_especialista();
                            system("cls");
                            switch(opcion_menu){

                                case 1://Gestion de informacion
                                    cout << "\t| 1: Ver informacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVer mi informacion" << endl;
                                        // cuenta_actual.mostrarCuenta();
                                        info.verInformacion(cuenta_actual);
                                        system("pause");
                                    }
                                break;
                                case 2://Gestion de solicitudes
                                    cout << "\t| 1: Visualizar solicitudes" << endl;
                                    cout << "\t| 2: Enviar solicitud" << endl;
                                    cout << "\t| 3: ELiminar solicitud" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar solicitudes" << endl;
                                        system("pause");
                                    }
                                    else if(opcion_menu_admin == 2){
                                        cout << "\n\tEnviar solicitud" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tEliminar solicitud" << endl;
                                        system("pause");
                                    }
                                break;
                                case 3://Gestion de agenda
                                    cout << "\t| 1: Visualizar agenda" << endl;
                                    cout << "\t| 2: Buscar especialista" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tVisualizar lista de especialistas" << endl;
                                        system("pause");
                                    }
                                    else{
                                        cout << "\n\tBuscar un especialista" << endl;
                                        system("pause");
                                    }
                                break;
                                case 4://Gestion de publicaciones
                                    cout << "\t| 1: Visualizar publicaciones" << endl;
                                    cout << "\t| 2: Crear publicacion" << endl;
                                    cout << "\t| 3: Seleccionar publicacion" << endl;
                                    cout << "\t| 4: Eliminar publicacion" << endl;
                                    cout << "\t| 5: Modificar publicacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                                case 5://Gestion de suscripcion
                                    cout << "\t| 1: Cancelar suscripcion" << endl;
                                    cout << "\t| 2: Ver informacion de suscripcion" << endl;
                                    cout << "\t| 3: Realizar pago" << endl;;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                            }

                        }while(opcion_menu < 5);

                    }
                    else//tipo_cuenta == 4
                    {
                        cout << "\t\t\tBienvenido Administrador!" << endl;
                        do{
                            opcion_menu = Aut.GUI_administrador();
                            system("cls");
                            switch(opcion_menu){

                                case 1://Gestion de informacion
                                    cout << "\t| 1: Modificar informacion" << endl;
                                    cout << "\t| 2: Ver informacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 1){
                                        cout << "\n\tModificar mi informacion" << endl;
                                        system("pause");
                                    }
                                    else if (opcion_menu_admin == 2){
                                        cout << "\n\tVer mi informacion" << endl;
                                        // cuenta_actual.mostrarCuenta();
                                        info.verInformacion(cuenta_actual);
                                        system("pause");
                                    }
                                break;
                                case 2://Gestion de cuentas
                                    cout << "\t| 1: Insertar" << endl;
                                    cout << "\t| 2: Eliminar" << endl;
                                    cout << "\t| 3: Modificar" << endl;
                                    cout << "\t| 4: Visuzalir cuentas" << endl;
                                    cout << "\t| 5: Buscar cuenta" << endl;
                                    cout << "\t| 6: Obtener total de cuentas" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                    if(opcion_menu_admin == 4){
                                        cout << "\n\t---- Lista de cuentas ----" << endl;
                                        lista_cuentas.mostrar("1");
                                    }
                                break;
                                case 3://Gestion de agenda
                                    cout << "\t| 1: Dar de alta" << endl;
                                    cout << "\t| 2: Dar de baja" << endl;
                                    cout << "\t| 3: Visualizar agenda" << endl;
                                    cout << "\t| 4: Buscar especialista" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                                case 4://Gestion de publicaciones
                                    cout << "\t| 1: Visualizar publicaciones" << endl;
                                    cout << "\t| 2: Crear publicacion" << endl;
                                    cout << "\t| 3: Seleccionar publicacion" << endl;
                                    cout << "\t| 4: Eliminar publicacion" << endl;
                                    cout << "\t| 5: Modificar publicacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
                                    cin >> opcion_menu_admin;
                                break;
                                case 5://Gestion de suscripcion
                                    cout << "\t| 1: Visualizar publicaciones" << endl;
                                    cout << "\t| 2: Crear publicacion" << endl;
                                    cout << "\t| 3: Seleccionar publicacion" << endl;
                                    cout << "\t| 4: Eliminar publicacion" << endl;
                                    cout << "\t| 5: Modificar publicacion" << endl;
                                    cout << "\t|-> Selecciona una opcion: ";
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
                    cout <<endl<< "INICIO DE SESION SIN EXITO" << endl;
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
