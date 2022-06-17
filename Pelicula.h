/*
 * Proyecto Cine clase Película
 * María Fernanda Moreno Gómez
 * A01708653
 * 17/06/2022
 * Esta clase define clase abstracta Película, el cual hereda atributos a las clases Menores y Mayores.
 * La finalidad de esta clase es controlar las películas con las distintas categorías que se tienen en el cine para que los usuarios, dependiendo de la edad que tengan, puedan ver o no las películas con una advertencia y con créditos recortados, dependiendo de la clasificación de la película
 */

#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Clase Pelicula será abstracta
class Pelicula {
  protected:
    int id;
    string titulo;
    int duracion;
    string genero;
    string descripcion;
    bool mayor_menor;

  public:
    //Constructor copia
    Pelicula(const Pelicula& );
  
    //Constructores
    Pelicula(int,string, int, string, string, bool);    
    Pelicula();

    //Getters
    int getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    string getDescripcion();
    bool getMayor_menor(); 

    //Otros métodos
    string advertencia(); //Polimorfismo
    int recorte_creditos(); //Polimorfismo
    virtual string mostrar_pelicula() = 0; //Método sobreescrito más adelante
};

Pelicula :: Pelicula(int _id, string _titulo, int _duracion, string _genero, string _descripcion, bool _mayor_menor){
  id=_id;
  titulo=_titulo;
  duracion=_duracion;
  genero=_genero;
  descripcion=_descripcion;
  mayor_menor=_mayor_menor;
};

Pelicula ::Pelicula(const Pelicula& a){
    id=a.id;
    titulo=a.titulo;
    duracion=a.duracion;
    genero=a.genero;
    descripcion=a.descripcion;
    mayor_menor=a.mayor_menor;
};

Pelicula ::Pelicula(){
  id=0;
  titulo="";
  duracion=0;
  genero="";
  descripcion="";
  mayor_menor=1;
};

//Getters
int Pelicula :: getId(){
  return id;
};

string Pelicula :: getTitulo(){
  return titulo;
};

int Pelicula :: getDuracion(){
  return duracion;
};

string Pelicula::getGenero(){
  return genero;
};

string Pelicula::getDescripcion(){
  return descripcion;
};

bool Pelicula::getMayor_menor(){
  return mayor_menor;
};

//Otros métodos

/**
 * advertencia genera una advertencia acerca de que la película es apta para todo público
 *
Es un método al ser creado para ocasionar polimorfismo entre las clases Película, Menores y Mayores, tiene como finalidad proyectar un mensaje de advertencia dependiendo de la clase heredada en la que sea utilizado. Por sí mismo, no va a funcionar en esta clase ya que Pelicula es una clase abstracta.
 *
 * @param 
 * @return string con la advertencia
 */
string Pelicula::advertencia(){
  string advertencia="¡Advertencia!";
  return advertencia;
};

/**
 * recorte_creditos hace un recorte a la duración de la película
 *
Es un método que, al ser creado especialmente para ocasionar polimorfismo entre las clases Película, Menores y Mayores, tiene como finalidad hacer un recorte de tiempo distinto dependiendo de la edad que es dirigida la película. Por sí mismo, no va a funcionar en esta clase ya que Película es una clase abstracta y no se pueden isntanciar objetos de esta.
 *
 * @param 
 * @return int con el resultado de la resta de la duración
 */
int Pelicula::recorte_creditos(){
  duracion+=0;
  return duracion;
};

#endif