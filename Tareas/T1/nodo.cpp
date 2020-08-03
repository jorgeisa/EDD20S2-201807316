#include "nodo.h"

Nodo::Nodo(Estudiante *estudiante)
{
    this->estudiante = estudiante;
    this->siguiente = NULL;
}

Nodo::Nodo(){
}

Nodo::~Nodo(){
    cout<<"\nNodo se destruyo - ";
}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo *nuevoNodo){
    this->siguiente=nuevoNodo;
}

Estudiante* Nodo::getEstudiante(){
    return this->estudiante;
}

void Nodo::setEstudiante(Estudiante* estudiante){
    this->estudiante=estudiante;
}
