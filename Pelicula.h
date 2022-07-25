#ifndef PELICULA_H_
#define PELICULA_H_

#include <string>
#include <iostream>

#include"Contenido.h"

class Pelicula: public Contenido{
private:
    int Duracion=0;
public:

Pelicula(string titulo, string genero, int duracion):
    Contenido{titulo,genero,"pelicula"}, Duracion{duracion} {}

virtual void mostrarInfo()const {
    cout<<"Titulo: "<<Titulo<<" Genero: "<<Genero<<" Tipo: "<<Tipo<<" Duración: "<<Duracion<<endl;
}

};
#endif