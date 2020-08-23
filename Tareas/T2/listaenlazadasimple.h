#ifndef LISTAENLAZADASIMPLE_H
#define LISTAENLAZADASIMPLE_H

#include <iostream>
#include <string.h>
#include <nodo.h>

class ListaEnlazadaSimple
{
public:
    //TAREA 1
    ListaEnlazadaSimple();
    ~ListaEnlazadaSimple();

    void setCabeza(Nodo);
    void setFin(Nodo);
    void setTamanio(int);
    Nodo getCabeza();
    Nodo getFin();
    int getTamanio();

    //TAREA 1
    void insertarLista(string nombre, long carnet);
    bool buscar(int); //int identificador
    void eliminar(int); //int identificador


    //TAREA 2: Clonar lista ya creada
    void clonarLista(ListaEnlazadaSimple *listaVacia);

    void imprimirLista();
    bool listaVacia();

private:
    Nodo* cabeza;
    Nodo* fin;
    int tamanio;
};

#endif // LISTAENLAZADASIMPLE_H
