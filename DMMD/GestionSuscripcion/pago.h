#include <iostream>
#include <string>
#include "Suscripcion.h"

class pago{
    private:
        int idPago;
        string nombreTitular;
        int numCuenta;
        int cvv;
        int fechaVencimiento;
    public:
        pago();
        pago(int idPago, string nombreTitular, int numCuenta, int cvv, int fechaVencimiento);
        ~pago();
        int getIdPago();
        void setIdPago(int idPago);
        int getnumCuenta();
        void setnumCuenta(int numCuenta);
        int getCvv();
        void setCvv(int cvv);
        int getVencimiento();
        void setVencimiento(int fechaVencimiento);
        string getNombreTitular();
        void setNombreTitular(string getNombreTitular);
};

pago::pago(){

}

pago::pago(int idPago, string nombreTitular, int numCuenta, int cvv, int fechaVencimiento){
    pago::idPago=idPago;
    pago::nombreTitular=nombreTitular;
    pago::cvv=cvv;
    pago::fechaVencimiento=fechaVencimiento;
    pago::numCuenta=numCuenta;
}

pago::~pago(){

}

int pago::getIdPago(){
    return idPago;
}
void pago::setIdPago(int idPago){
    pago::idPago=idPago;
}

int pago::getnumCuenta(){
    return numCuenta;
}
void pago::setnumCuenta(int numCuenta){
    pago::numCuenta=numCuenta;
}

int pago::getCvv(){
    return cvv;
}

void pago::setCvv(int cvv){
    pago::cvv=cvv;
}

int pago::getVencimiento(){
    return fechaVencimiento;
}

void pago::setVencimiento(int fechaVencimiento){
    pago::fechaVencimiento=fechaVencimiento;
}

string pago::getNombreTitular(){
    return nombreTitular;
}
void pago::setNombreTitular(string getNombreTitular){
    pago::nombreTitular=nombreTitular;
}