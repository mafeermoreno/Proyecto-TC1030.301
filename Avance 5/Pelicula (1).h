/*
 * Proyecto Cine clase Película
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase define clase abstracta Película, el cual hereda atributos a las clases Menores y Mayores.
 * La finalidad de esta clase es controlar las películas con las distintas categorías que se tienen en el cine para que los usuarios, dependiendo de la edad que tengan, puedan ver o no las películas con una advertencia y con créditos recortados o no, dependiendo de la clasificación de la película
 */

#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

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
    void advertencia(); //Polimorfismo
    virtual void recorte() = 0; //Clase abstracta
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
  titulo="Indefinido";
  duracion=0;
  genero="N/A";
  descripcion="N/A";
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
void Pelicula::advertencia(){
  descripcion+="Apto para todo público";
};


#endif