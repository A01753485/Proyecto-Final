#ifndef CAPITULO_H_
#define CAPITULO_H_

#include <string>
#include <iostream>

using namespace std;

class Capitulo{

private:
    string Titulo;
    int Duracion;
    int NumeroDeCapitulo;

public:
    Capitulo(string titulo, int duracion, int numcap):
        Titulo{titulo}, Duracion{duracion}, NumeroDeCapitulo{numcap} {}
    
    void infoCapitulo() const 
    {
        cout<< "Capitulo: "<< NumeroDeCapitulo << ": "<< Titulo << " Duración: "<< Duracion <<endl;
    }
    friend ostream& operator << (ostream &os, const Capitulo &capitulo){
        
        capitulo.infoCapitulo();
        return os;
    }
};
#endif