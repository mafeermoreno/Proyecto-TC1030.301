/*
 * Proyecto Cine clase Menores
 * María Fernanda Moreno Gómez
 * A01708653
 * 17/06/2022
 * Esta clase define objeto de tipo Menores la cual hereda atributos de la clase Pelicula. Su clase hermana es Mayores.
 * La finalidad de esta clase es que dependiendo de la edad del público, aparezca una advertencia con la leyenda de que se puede ver la película, además, si la película es para menores de edad, se van a acortar los créditos del final en su totalidad de manera de no aburrir al público infantil.
 */

#ifndef MENORES_H
#define MENORES_H

#include <iostream>
#include <string>
#include <sstream>
#include "Pelicula.h"
using namespace std;

class Menores : public Pelicula{
  public:
    //Constructor copia
    Menores(const Menores& a):Pelicula(a){};

    //Constructores
    Menores(): Pelicula(0, "", 0, "", "",1){};
    Menores(int id, string titulo, int duracion, string genero, string descripcion): Pelicula(id, titulo, duracion, genero, descripcion,1){};

    //Otros métodos
    string advertencia();
    int recorte_creditos();
    string mostrar_pelicula();
    Menores* operator+(Menores*)const;//Sobrecarga del operador +
};

//Otros métodos

/**
 * advertencia genera una advertencia acerca de que la película es apta para todo público
 *
Es un método utilizado por medio de polimorfismo con el método advertencia() de la clase Pelicula, debido a que esta es la clase Padre. Como es una película destinada a menores de edad, la advertencia será que es apta para todo el público
 *
 * @param 
 * @return string con la advertencia
 */
string Menores::advertencia(){
  string advertencia="Esta película es apta para todo público";
  return advertencia;
};

/**
 * recorte_creditos hace un recorte a la duración de la película
 *
Es un método utilizado por medio de polimorfismo con el método recorte_creditos() de la clase Pelicula, debido a que esta es la clase Padre. Lo que hace es tomar la duración original y quitarle ocho minutos de los créditos, debido a que es una película infantil y no se quiere aburrir al público infantil durante los créditos.
 *
 * @param 
 * @return int con el resultado de la resta de la duración
 */
int Menores::recorte_creditos(){
  duracion -= 8;
  return duracion;
};

/**
 * operator + genera una sobrecarga del operador "+" para que este pueda sumar las duraciones de varias películas.
 *
En esta sobrecarga del operador "+" en la clase de Menores se busca que, si se llegase a existir un maratón de películas del mismo tipo, se puedan sumar sus duraciones por medio de este operador.
 *
 * @param apuntador a un objeto de Menores
 * @return el objeto de la clase de Menores con su suma de la duración
 */
Menores* Menores::operator+(Menores*m )const{
  int b1;
  b1=m->getDuracion()+duracion;
  return (new Menores(1,"Maratón",b1,genero,"Maratón"));
}

/**
 * mostrar_pelicula hace que todos los atributos de la clase Menores se concatenen en un string
 *
Es un método abstracto declarado en la clase Película el método mostrar_pelicula(), debido a que esta es la clase Padre. Lo que hace es concatenar los atributos declarados de la clase Menores en un string para que esta pueda ser impresa más adelante. Cabe señalar que lo que se imprime son los atributos de nuestra película de la clasificación menores.
 *
 * @param 
 * @return string con atributos concatenados
 */
string Menores::mostrar_pelicula() {
  stringstream peli;
  peli <<advertencia()<<"\nId de la pelicula: "<< id <<"\nTítulo: "<< titulo << "\nDuración: " <<recorte_creditos()<<"\nGénero: "<<genero<<"\nDescripción: "<<descripcion<<endl;
  return peli.str();
}
#endif