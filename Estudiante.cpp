#include "Persona.cpp"

class Estudiante:Persona{

    protected:
            string semestre,facultad,direccion,carne;
    
    public:
            Estudiante(string Nombre,string Apellido,string Celular,string Direccion,string Facultad,string Semestre,string Carne):Persona(Nombre,Apellido,Celular){

                semestre = Semestre;
                facultad = Facultad;
                direccion = Direccion;
                carne = Carne;
            }

    void setNombre(string Nombres){
        nombres = Nombres;
    }
    void setApellido(string Apellidos){
        apellidos = Apellidos;
    }
    void setCelular(string Celular){
        celular = Celular;
    }
    void setDireccion(string Direccion){
        direccion = Direccion;
    }
    void setFacultad(string Facultad){
        facultad = Facultad;
    }
    void setCarne(string Carne){
        carne = Carne;
    }
    void setSemestre(string Semestre){
        semestre = Semestre;
    }
    //MOSTRANDO LOS DATOS UNO POR UNO

    string getNombre(){
        return nombres;
    }
    string getApellido(){
        return apellidos;
    }
    string getCelular(){
        return celular;
    }
    string getDireccion(){
        return direccion;
    }
    string getFacultad(){
        return facultad;
    }
    string getSemestre(){
        return semestre;
    }
    string getCarne(){
        return carne;
    }

    void mostrarDatos(){
        cout<<"\n\t\t.:Datos del Estudiante:.\n\n"<<endl;
        cout<<"Nombres: "<<nombres<<endl;
        cout<<"Apellidos: "<<apellidos<<endl;
        cout<<"Celular: "<<celular<<endl;
        cout<<"Direccion: "<<direccion<<endl;
        cout<<"Facultad: "<<facultad<<endl;
        cout<<"Semestre: "<<semestre<<endl;
        cout<<"Carne: "<<carne<<endl;
    }
};