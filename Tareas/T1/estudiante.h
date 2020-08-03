#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string.h>

using namespace std;

class Estudiante
{
public:
    Estudiante(string, long); //Constructor
    Estudiante();
    ~Estudiante(); //Destructor
    string getNombre();
    long getCarnet();
    void setNombre(string);
    void setCarnet(long);

private:
    string nombre;
    long carnet;
};

#endif // ESTUDIANTE_H
