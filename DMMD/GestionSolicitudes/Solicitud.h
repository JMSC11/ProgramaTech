class Solicitud{
private:
    int IdSolicitud;
    string estado;
public:
    Solicitud();
    void rechazar();
    void aceptar();
    void contacto();
    void mostrarSolicitud();
    int getIdSolicitud();
    string getEstado();
};
Solicitud::Solicitud(){
    idSolicitud = 0;
    estado = "sin estado";
}
void Solicitud::rechazar(){
}
void Solicitud::aceptar(){
}
void Solicitud::contacto(){
}
void Solicitud::mostrarSolicitud(){
}
int Solicitud::getIdSolicitud(){
}
string Solicitud::getEstado(){
}