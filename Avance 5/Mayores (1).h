/*
 * Proyecto Cine clase Mayores
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase defina objeto de tipo Mayores la cual hereda atributos de la clase Pelicula. Su clase hermana es Menores.
 * La finalidad de esta clase es que dependiendo del género de la o las películas que estén en la cartelera, el usuario pueda escoger aquella según su interés. Si la película es para mayores, se proyectará antes de comenzar una película una advertencia sobre el tipo de contenido, mientras que si la película es para menores, los créditos se van a recortar, de manera de no aburrir al público infantil.
 */

#ifndef MAYORES_H
#define MAYORES_H

#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;

class Mayores : public Pelicula{
  public:
    Mayores(const Mayores& a);
    Mayores(int _id, string a, int b, string c, string d);

    void advertencia();
    void recorte();
    Mayores operator+(Mayores*)const;
};


Mayores :: Mayores(const Mayores& a):Pelicula(a){
};
Mayores :: Mayores(int _id, string a, int b, string c, string d):Pelicula(_id,a,b,c,d,0){};

void Mayores::advertencia(){
    duracion += 5; 
};

void Mayores::recorte(){
  duracion -=7;
};

Mayores Mayores::operator+(Mayores*m )const{ //m es un apuntador a un objeto de la clase Mayores
  int b1;
  b1=m->getDuracion()+duracion;
  return (*new Mayores(1,"Maratón",b1,genero,"Maratn"));
}

#endif