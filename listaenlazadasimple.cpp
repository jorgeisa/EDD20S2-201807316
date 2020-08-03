#include "listaenlazadasimple.h"

ListaEnlazadaSimple::ListaEnlazadaSimple()
{
    this->cabeza=NULL;
    this->fin=NULL;
    this->tamanio=0;
}

void ListaEnlazadaSimple::insertarLista(Nodo *nuevoNodo){
    if(this->cabeza==NULL){
        //Esta vacia la lista
        this->cabeza=nuevoNodo;
        this->fin=nuevoNodo;
    }else{
        //Esta con al menos un elemento
        this->fin->setSiguiente(nuevoNodo);
        this->fin=nuevoNodo;
    }
    this->tamanio++;
    cout<<"\nSe ha insertado el estudiante correctamente :).\n"<<endl;
}

bool ListaEnlazadaSimple::buscar(int carnet){
    Nodo *temp = this->cabeza;
    while(temp != NULL){
        if(temp->getEstudiante()->getCarnet()==carnet){
            string nombre = temp->getEstudiante()->getNombre();
            long carnet = temp->getEstudiante()->getCarnet();
            cout<<"\nSe encontro el estudiante '"<<nombre<<"' con el carnet "<<carnet<<"\n"<<endl;
            return true;
        }else if(temp->getSiguiente()==NULL){
            cout<<"No se encontro el estudiante :(\n"<<endl;
        }
        temp=temp->getSiguiente();
    }
    return false;
}

void ListaEnlazadaSimple::eliminar(int carnet){
    Nodo *temp=this->cabeza;

    if(temp!=NULL){
        Nodo *anterior = NULL;
        while((temp!=NULL) && (temp->getEstudiante()->getCarnet() != carnet)){
            anterior = temp;
            temp = anterior->getSiguiente();
        }

        //Si no encontro el elemento
        if(temp == NULL){
            cout<<"No se encontro el estudiante a eliminar\n"<<endl;
        }else if(anterior == NULL){
            //Si es el primer elemento el que se eliminará
            this->cabeza = cabeza->getSiguiente();
            delete temp;
            this->tamanio--;
            cout<<"Su estudiante ha sido eliminado de su lista :o\n"<<endl;
        }else{
            //Elemento en lista
            //Si es el final de la lista
            if(temp == (this->fin)){
                //Si elimino el fin
                cout<<"\nSe elimino el fin.";
                this->fin = anterior;
            }
            anterior->setSiguiente(temp->getSiguiente());
            delete temp;
            this->tamanio--;
            cout<<"Su estudiante ha sido eliminado de su lista :o\n"<<endl;
        }

    }
}

void ListaEnlazadaSimple::imprimirLista(){
    Nodo *temp = this->cabeza;
    if(!this->listaVacia()){
        cout<<"El tamanio de su lista es: "<<this->tamanio<<endl;
        while(temp!=NULL){
            string nombre = temp->getEstudiante()->getNombre();
            long carnet = temp->getEstudiante()->getCarnet();
            cout<<"Estudiante: "<<nombre<<" , Carnet: "<<carnet<<endl;
            temp = temp->getSiguiente();
        }
    }else{
        cout<<"Su lista esta vacia! D:"<<endl;
    }
    cout<<"\n";
}

bool ListaEnlazadaSimple::listaVacia(){
    return (this->cabeza == NULL)? true : false;
}
