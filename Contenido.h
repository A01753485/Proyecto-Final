#ifndef CONTENIDO_H_
#define CONTENIDO_H_

#include <string>
#include <iostream>
using namespace std;
class Contenido{

protected:
  string Titulo;
  string Genero;
  string Tipo;

public:
  Contenido(string titulo, string genero, string tipo): Titulo{titulo}, Genero{genero}, Tipo{tipo} {}

   virtual void mostrarInfo() const = 0;

   friend ostream& operator << (ostream &os, const Contenido &contenido){
      contenido.mostrarInfo();
      return os;
    }
};

#endif