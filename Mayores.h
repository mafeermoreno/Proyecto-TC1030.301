/*
 * Proyecto Cine clase Mayores
 * María Fernanda Moreno Gómez
 * A01708653
 * 17/06/2022
 * Esta clase defina objeto de tipo Mayores la cual hereda atributos de la clase Pelicula. Su clase hermana es Menores.
 * La finalidad de esta clase es que como la película está dirigida a un grupo de personas con la mayoría de edad, se proyecte la indicación de que es una película apta para mayores de edad, además de que se hace un recorte mínimo en los créditos de manera que las personas vean hasta las escenas post-créditos.
 */

#ifndef MAYORES_H
#define MAYORES_H

#include <iostream>
#include <string>
#include <sstream>
#include "Pelicula.h"
using namespace std;

class Mayores : public Pelicula{
  public:
    //Constructor copia
    Mayores(const Mayores& a):Pelicula(a){};

    //Constructores
    Mayores(): Pelicula(0, "", 0, "", "",0){};
    Mayores(int id, string titulo, int duracion, string genero, string descripcion): Pelicula(id, titulo, duracion, genero, descripcion,0){};

    //Otros métodos
    string advertencia();
    int recorte_creditos();
    string mostrar_pelicula();
    Mayores operator+(Mayores*)const;
};

//Otros métodos

/**
 * advertencia genera una advertencia acerca de que la película es apta para mayores de edad
 *
Es un método utilizado por medio de polimorfismo con el método advertencia() de la clase Pelicula, debido a que esta es la clase Padre. Como es una película destinada a mayores de edad, la advertencia será que es apta para mayores de edad
 *
 * @param 
 * @return string con la advertencia
 */
string Mayores::advertencia(){
  string advertencia="Esta película es para mayores de edad";
  return advertencia;
};

/**
 * recorte_creditos hace un recorte a la duración de la película
 *
Es un método utilizado por medio de polimorfismo con el método recorte_creditos() de la clase Pelicula, debido a que esta es la clase Padre. Lo que hace es tomar la duración original y quitarle únicamente dos minutos de los créditos, debido a que es una película para un público mayor y estos suelen quedarse a ver la película hasta el término de las escenas post-créditos
 *
 * @param 
 * @return int con el resultado de la resta de la duración
 */
int Mayores::recorte_creditos(){
  duracion -=2;
  return duracion;
};

/**
 * operator + genera una sobrecarga del operador "+" para que este pueda sumar las duraciones de varias películas.
 *
En esta sobrecarga del operador "+" en la clase de Mayoress se busca que, si se llegase a existir un maratón de películas del mismo tipo, se puedan sumar sus duraciones por medio de este operador.
 *
 * @param apuntador a un objeto de Mayores
 * @return el objeto de la clase de Mayores con su suma de la duración
 */
Mayores Mayores::operator+(Mayores*m )const{ //m es un apuntador a un objeto de la clase Mayores
  int b1;
  b1=m->getDuracion()+duracion;
  return (*new Mayores(1,"Maratón",b1,genero,"Maratón"));
}

/**
 * mostrar_pelicula hace que todos los atributos de la clase Mayores se concatenen en un string
 *
Es un método abstracto declarado en la clase Película el método mostrar_pelicula(), debido a que esta es la clase Padre. Lo que hace es concatenar los atributos declarados de la clase Mayores en un string para que esta pueda ser impresa más adelante. Cabe señalar que lo que se imprime son los atributos de nuestra película de la clasificación mayores.
 *
 * @param 
 * @return string con atributos concatenados
 */
string Mayores::mostrar_pelicula() {
  stringstream peli;
  peli <<advertencia()<<"\nId de la pelicula: "<< id <<"\nTítulo: "<< titulo << "\nDuración: " <<recorte_creditos()<<"\nGénero: "<<genero<<"\nDescripción: "<<descripcion<<endl;
  return peli.str();
}

#endif