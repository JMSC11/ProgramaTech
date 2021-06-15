class c_Usuario : public cuenta{
    private:
    
    public:
        c_Usuario(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono);
        void mostrarDatosUsuario();
};

c_Usuario(int id, string usuario, string password, string nombre, string tipoCuenta, int edad, string correo, double telefono) : cuenta(nt id,  usuario,  password,  nombre,  tipoCuenta, it edad,  correo,  telefono){

}

void c_Usuario::mostrarDatosUsuario(){
    mostrarCuenta();
}