/*
María Fernanda Moreno Gómez
Clase película, la cual tiene como atributos el título, duración, género, descripción y si la película es para mayores o menores de edad, esta clase hereda a mayores y menores, que son la clasificación para ver qué tipo de público puede ver la película
*/
#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Pelicula {
  protected:
    string titulo;
    int duracion;
    string genero;
    string descripcion;
    bool mayor_menor;
  public:
    //Constructor copia
    Pelicula(const Pelicula& );
  
    //Constructores
    Pelicula(string, int, string, string, bool);    
    Pelicula();
    //Métodos
    void advertencia(); //Polimorfismo
    virtual void recorte() = 0; //Clase abstracta
    string getTitulo();
    int getDuracion();
    string getGenero();
    string getDescripcion();
    bool getMayor_menor();
    

};


Pelicula :: Pelicula(string _titulo, int _duracion, string _genero, string _descripcion, bool _mayor_menor){
  titulo=_titulo;
  duracion=_duracion;
  genero=_genero;
  descripcion=_descripcion;
  mayor_menor=_mayor_menor;
};

Pelicula ::Pelicula(const Pelicula& a){
    titulo=a.titulo;
    duracion=a.duracion;
    genero=a.genero;
    descripcion=a.descripcion;
    mayor_menor=a.mayor_menor;
};

Pelicula ::Pelicula(){
  titulo="Indefinido";
  duracion=0;
  genero="N/A";
  descripcion="N/A";
  mayor_menor=1;
};

//Getters
string Pelicula:: getTitulo(){
  return titulo;
};

int Pelicula::getDuracion(){
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

void Pelicula::advertencia(){
  descripcion+="velo con confianza";
};


#endif