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

#endif