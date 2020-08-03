#ifndef NODO_H
#define NODO_H

#include <estudiante.h>
#include <iostream>
#include <string.h>

class Nodo
{
public:
    Nodo(Estudiante*);
    Nodo();
    ~Nodo();
    void setEstudiante(Estudiante*);
    void setSiguiente(Nodo*);
    Estudiante* getEstudiante();
    Nodo* getSiguiente();

private:
    Estudiante* estudiante; //dato
    Nodo* siguiente; //puntero
};

#endif // NODO_H
