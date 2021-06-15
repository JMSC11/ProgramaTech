class c_Empresa : public cuenta{
    private:
        string nombreEmpresa;
        string puesto;

    public:
        c_Empresa(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, string nombreEmpresa, string puesto );
        string getNombreEmpresa();
        void setNombreEmpresa(string nombre);
        string getPuesto();
        void setPuesto(string cargo);
        void mostrarDatosEmpresa();
};

c_Empresa::c_Empresa(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono, string nombreEmpresa, string puesto ) : cuenta(nt id,  usuario,  password,  nombre,  tipoCuenta, it edad,  correo,  telefono){
    c_Empresa::nombreEmpresa=nombreEmpresa;
    c_Empresa::puesto=puesto;
}


string c_Empresa::getNombreEmpresa(){
    return nombreEmpresa;
}
void c_Empresa::setNombreEmpresa(string nombre){
    c_Empresa::nombreEmpresa = nombre;
}

string c_Empresa::getPuesto(){
    return puesto;
}
void c_Empresa::setPuesto(string cargo){
    c_Empresa::puesto=cargo;
}
void c_Empresa::mostrarDatosEmpresa(){
    mostrarCuenta();
    cout<<getNombreEmpresa()<<endl;
    cout<<getPuesto()<<endl;
}