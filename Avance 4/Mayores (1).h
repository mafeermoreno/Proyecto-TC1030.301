#ifndef MAYORES_H
#define MAYORES_H

#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;

class Mayores : public Pelicula{
public:
  Mayores(const Mayores& a);
  Mayores(string a, int b, string c, string d);

  void advertencia();
  void recorte();
  Mayores operator+(Mayores*)const;
};


Mayores :: Mayores(const Mayores& a):Pelicula(a){
};
Mayores :: Mayores(string a, int b, string c, string d):Pelicula(a,b,c,d,0){};

void Mayores::advertencia(){
    duracion += 5; 
};

void Mayores::recorte(){
  duracion -=7;
};

Mayores Mayores::operator+(Mayores*m )const{ //m es un apuntador a un objeto de la clase Mayores
  int b1;
  b1=m->getDuracion()+duracion;
  return (*new Mayores("Maraton",b1,genero,"Maraton"));
}

#endif