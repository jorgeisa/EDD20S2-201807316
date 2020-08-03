#ifndef LISTAENLAZADASIMPLE_H
#define LISTAENLAZADASIMPLE_H

#include <iostream>
#include <string.h>
#include <nodo.h>

class ListaEnlazadaSimple
{
public:
    ListaEnlazadaSimple();
    ~ListaEnlazadaSimple();

    void setCabeza(Nodo);
    void setFin(Nodo);
    void setTamanio(int);
    Nodo getCabeza();
    Nodo getFin();
    int getTamanio();

    void insertarLista(Nodo*); //nuevoNodo
    bool buscar(int); //int identificador
    void eliminar(int); //int identificador
    void imprimirLista();
    bool listaVacia();

private:
    Nodo* cabeza;
    Nodo* fin;
    int tamanio;
};

#endif // LISTAENLAZADASIMPLE_H
