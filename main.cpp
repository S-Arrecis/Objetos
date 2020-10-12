#include "Estudiante.cpp"
void menu(Estudiante);
void mostrarTodo(Estudiante);
void editarDatos(Estudiante);
void mostrarDatos(Estudiante);

int main(){

    string nombre,apellido,celular,facultad,carne,semestre,direccion;
    
    cout<<"Digite los Nombres: "; getline(cin,nombre);
    cout<<"Digite los Apellidos: "; getline(cin,apellido);
    cout<<"Digite el numero de Celular: "; getline(cin,celular);
    cout<<"Digite su Direccion: "; getline(cin,direccion);
    cout<<"Digite su Facultad: "; getline(cin,facultad);
    cout<<"Digte el ultimo semetre cursado: "; getline(cin,semestre);
    cout<<"Digite el numero de Carne: "; getline(cin,carne);

    Estudiante alumno = Estudiante(nombre,apellido,celular,direccion,facultad,semestre,carne);

    menu(alumno);
    
    return 0;
}

void menu(Estudiante alumno){
    int opcion;
    do{
        system("cls");
        cout<<" \n\n\t\t.: BIENVENIDO:.\n\n"<<endl;

        cout<<"1. Mostrar todos los datos del alumno."<<endl;
        cout<<"2. Editar datos del alumno. "<<endl;
        cout<<"3. Mostrar algun dato en especial."<<endl;
        cout<<"99. SALIR. "<<endl;

        cout<<"\nDigite una opcion: "; cin>>opcion;

        switch(opcion){
            case 1: mostrarTodo(alumno); break;
            case 2: editarDatos(alumno); break;
            case 3:  mostrarDatos(alumno); break;
            case 99: exit(1); break;
            default: system("cls"); cout<<"OPCION NO VALIDA.....\n\n"<<endl; system("pause");
        }
    }while (opcion != 99);
    
}

void mostrarTodo(Estudiante alumno){
    system("cls");
    cout<<"CARGANDO DATOS ";
    for(int i=0;i<10;i++){
        cout<<"*";
    }
    
    alumno.mostrarDatos();
    cout<<"\n"<<endl;
    system("pause");
}
void editarDatos(Estudiante alumno){
    int opcion;
    string dato;

    do{
        cout<<"\n\n\t\t.:EDITAR DATOS:.\n\n"<<endl;

        cout<<"1. Editar Nombres."<<endl;
        cout<<"2. Editar Apellidos."<<endl;
        cout<<"3. Editar Celular"<<endl;
        cout<<"4. Editar Direccion."<<endl;
        cout<<"5. Editar Facultad."<<endl;
        cout<<"6. Editar Semestre."<<endl;
        cout<<"7. Editar Carne."<<endl;
        cout<<"99. Regresar."<<endl;
        cout<<"\nDigite una opcion: "; cin>>opcion;

        switch(opcion){
            case 1: system("cls"); fflush(stdin);
            cout<<"Digite los nuevos nombres: "; getline(cin,dato);
            alumno.setNombre(dato);
            break;

            case 2:system("cls"); fflush(stdin);
            cout<<"Digite los nuevos apellidos: "; getline(cin,dato);
            alumno.setApellido(dato);
            break;

            case 3:system("cls"); fflush(stdin);
            cout<<"Digite el nuevo celular: "; getline(cin,dato);
            alumno.setCelular(dato); 
            break;

            case 4:system("cls"); fflush(stdin);
            cout<<"Digite la nueva direccion: "; getline(cin,dato);
            alumno.setDireccion(dato); 
            break;

            case 5:system("cls"); fflush(stdin);
            cout<<"Digite la nueva Facultad: "; getline(cin,dato);
            alumno.setFacultad(dato);
            break;

            case 6:system("cls"); fflush(stdin);
            cout<<"Digite el nuevo Semestre: "; getline(cin,dato);
            alumno.setSemestre(dato);
            break;

            case 7:system("cls"); fflush(stdin);
            cout<<"Digite el nuevo carne: "; getline(cin,dato);
            alumno.setCarne(dato);
            break;

            case 99: menu(alumno); break;
        }
    }while(opcion != 99);
}
void  mostrarDatos(Estudiante alumno){

    int opcion;
    string dato;

    do{
        cout<<"\n\n\t\t.:MOSTRAR DATOS:.\n\n"<<endl;

        cout<<"1. Mostrar Nombres."<<endl;
        cout<<"2. Mostrar Apellidos."<<endl;
        cout<<"3. Mostrar Celular"<<endl;
        cout<<"4. Mostrar Direccion."<<endl;
        cout<<"5. Mostrar Facultad."<<endl;
        cout<<"6. Mostrar Semestre."<<endl;
        cout<<"7. Mostrar Carne."<<endl;
        cout<<"99. Regresar."<<endl;
        cout<<"\nDigite una opcion: "; cin>>opcion;

        switch(opcion){
            case 1: system("cls");
            cout<<"Nombres: "<<alumno.getNombre()<<"\n"<<endl;
            system("pause");
            break;

            case 2:system("cls");
            cout<<"Apellidos: "<<alumno.getApellido()<<"\n"<<endl;
            system("pause");
            break;

            case 3:system("cls"); 
            cout<<"Celular: "<<alumno.getCelular()<<"\n"<<endl;
            system("pause");
            break;

            case 4:system("cls"); 
            cout<<"Direccion: "<<alumno.getDireccion()<<"\n"<<endl;
            system("pause");
            break;

            case 5:system("cls");
            cout<<"Facultad: "<<alumno.getFacultad()<<"\n"<<endl;
            system("pause");
            break;

            case 6:system("cls");
            cout<<"Semestre: "<<alumno.getSemestre()<<"\n"<<endl;
            system("pause");
            break;

            case 7:system("cls");
            cout<<"Carne: "<<alumno.getCarne()<<"\n"<<endl;
            system("pause");
            break;

            case 99: menu(alumno); break;
        }
    }while(opcion != 99);

}
