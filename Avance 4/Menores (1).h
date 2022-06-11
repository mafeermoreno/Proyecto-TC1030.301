#ifndef MENORES_H
#define MENORES_H

#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;

class Menores : public Pelicula{
public:
  Menores(const Menores& a);
  Menores(string a, int b, string c, string d);

  void advertencia();
  void recorte();
  Menores* operator+(Menores*)const;
};


Menores :: Menores(const Menores& a):Pelicula(a){
};

Menores :: Menores(string a, int b, string c, string d):Pelicula(a,b,c,d,1){};

void Menores::advertencia(){
    duracion += 1;
  };

void Menores::recorte(){
    duracion -= 5;
  };
Menores* Menores::operator+(Menores*m )const{
  int b1;
  b1=m->getDuracion()+duracion;
  return (new Menores("Maraton",b1,genero,"Maraton"));
}

#endif


