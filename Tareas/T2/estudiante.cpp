#include "estudiante.h"

Estudiante::Estudiante(string nombre, long carnet)
{
    this->carnet=carnet;
    this->nombre=nombre;
}

Estudiante::Estudiante(){}

Estudiante::~Estudiante(){
    cout<<"Estudiante Eliminado";
}

long Estudiante::getCarnet(){
    return carnet;
}

string Estudiante::getNombre(){
    return nombre;
}

void Estudiante::setCarnet(long carnet){
    this->carnet=carnet;
}

void Estudiante::setNombre(string nombre){
    this->nombre=nombre;
}
