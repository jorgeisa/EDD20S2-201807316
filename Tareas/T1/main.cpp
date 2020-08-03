#include <listaenlazadasimple.h>
#include <nodo.h>
#include <estudiante.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void menu();
ListaEnlazadaSimple *listaEstudiantes = new ListaEnlazadaSimple();
Nodo *nuevoNodo;
Estudiante *nuevoEstudiante;

int main()
{
    menu();
    getch();
    return 0;
}

void menu(){
    int opcion;
    string nombre;
    long carnet;

    do{
        cout<<"\t Menu \n";
        cout<<"1. Ingresar estudiante a la lista.\n";
        cout<<"2. Buscar un estudiante por carnet.\n";
        cout<<"3. Eliminar estudiante de la lista.\n";
        cout<<"4. Ver lista estudiantes.\n";
        cout<<"5. Salir.\n";
        cout<<"Por favor ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
        case 1:
            cout<<"\n \tAgregar un estudiante";
            cout<<"\nIngrese el nombre del estudiante: ";
            cin>>nombre;
            cout<<"Ingrese el carnet del estudiante: ";
            cin>>carnet;
            nuevoEstudiante = new Estudiante(nombre, carnet);
            nuevoNodo = new Nodo(nuevoEstudiante);
            listaEstudiantes->insertarLista(nuevoNodo);
            break;
        case 2:
            cout<<"\n \tBuscar un Estudiante"<<endl;
            if(!listaEstudiantes->listaVacia()){
                cout<<"Ingrese el numero de carnet del estudiante: ";
                cin>>carnet;
                listaEstudiantes->buscar(carnet);
            }else{cout<<"Su lista esta vacia! D:\n"<<endl;}
            break;
        case 3:
            cout<<"\n \tEliminar estudiante de la lista"<<endl;
            if(!listaEstudiantes->listaVacia()){
                cout<<"Ingrese el carnet del estudiante a eliminar: ";
                cin>>carnet;
                listaEstudiantes->eliminar(carnet);
            }else{cout<<"Su lista esta vacia! D:\n"<<endl;}
            break;
        case 4:
            cout<<"\n \tImprimiendo lista de estudiantes.\n";
            listaEstudiantes->imprimirLista();
            break;
        case 5:
            cout<<"\nHa salido de la aplicacion :^).";
            break;
        default:
            cout<<"Por favor seleccione una opcion valida :)\n";
        }
    }while(opcion!=5);
}
