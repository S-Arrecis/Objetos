#include <iostream>

using namespace std;

class Persona{

    protected:
                string nombres,apellidos,celular;
    
    protected:
                Persona(string _nombres,string _apellidos,string _celular){
                    nombres = _nombres;
                    apellidos = _apellidos;
                    celular = _celular;
                }
    
    void mostrarDatos();
    


};