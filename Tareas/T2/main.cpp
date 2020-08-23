#include <listaenlazadasimple.h>
#include <nodo.h>
#include <estudiante.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void menu();
ListaEnlazadaSimple *listaEstudiantes = new ListaEnlazadaSimple();
ListaEnlazadaSimple *listaCopia = new ListaEnlazadaSimple();

int main()
{
    //201807316 - Jorge Isaac  Xicol Vicente


    //menu();
    //Agregamos manualmente los datos a la listaEstudiantes
    listaEstudiantes->insertarLista("Jorge Isaac", 19);
    listaEstudiantes->insertarLista("Manuel Hidalgo", 15);
    listaEstudiantes->insertarLista("Karen Lopez", 30);
    listaEstudiantes->insertarLista("Ana Lucia", 23);
    listaEstudiantes->imprimirLista();

    //Clonamos la lista a la listaCopia y la imprimimos
    listaEstudiantes->clonarLista(listaCopia);
    listaCopia->imprimirLista();

    /*
      Para comprobar eliminamos un nodo de la listaEstudiantes y
      la volvemos a imprimir. Ahora solo contendra 3 datos
    */
    listaEstudiantes->eliminar(19);
    listaEstudiantes->imprimirLista();

    /*Finalmente imprimimos la lista clonada con el dato
     borrado contenido dentro.
    */
    listaCopia->imprimirLista();
    getch();
    return 0;
}

//TAREA 1
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
            fflush(stdin); // Limpieza del buffer
            getline(cin, nombre);
            cout<<"Ingrese el carnet del estudiante: ";
            cin>>carnet;
            listaEstudiantes->insertarLista(nombre, carnet);
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
