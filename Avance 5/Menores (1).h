/*
 * Proyecto Cine clase Menores
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase define objeto de tipo Menores la cual hereda atributos de la clase Pelicula. Su clase hermana es Mayores.
 * La finalidad de esta clase es que dependiendo del género de la o las películas que estén en la cartelera, el usuario pueda escoger aquella según su interés. Si la película es para menores de edad, se van a acortar los créditos del final, de manera de no aburrir al público infantil.
 */

#ifndef MENORES_H
#define MENORES_H

#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;

class Menores : public Pelicula{
public:
  //Constructor copia
  Menores(const Menores& a);

  //Constructores
  Menores(int _id, string a, int b, string c, string d);

  //Otros métodos
  void advertencia();
  void recorte();
  Menores* operator+(Menores*)const;//Sobrecarga del operador +
};

Menores :: Menores(const Menores& a):Pelicula(a){
};

Menores :: Menores(int _id,string a, int b, string c, string d):Pelicula(_id,a,b,c,d,1){};

void Menores::advertencia(){
    duracion += 1;
};

void Menores::recorte(){
    duracion -= 5;
};

//Otros métodos
Menores* Menores::operator+(Menores*m )const{
  int b1;
  b1=m->getDuracion()+duracion;
  return (new Menores(1,"Maratón",b1,genero,"Maratón"));
}

#endif


