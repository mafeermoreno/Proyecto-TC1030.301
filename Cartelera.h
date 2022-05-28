/*
María Fernanda Moreno Gómez
Clase cartelera, esta nos va a decir los títulos de las películas que están en ese momento, así como el género de estas (ya que en algunas no pueden entrar niños), la hora en la que está la función, la descripción de la película y el número de sala donde se proyectará la película. Se pueden agregar títulos, eliminarlos, agregar horas, eliminarlos, agregar descripciones y eliminarlas según sea requerido
*/
#ifndef CARTELERA_H
#define CARTELERA_H

#include <iostream>
using namespace std;

class Cartelera{
  protected: //Atributos
    string titulo;
    string genero;
    string hora;
    string descripcion;
    int num_sala;
  public: //Métodos
    //Constructores
    Cartelera(): titulo(""), genero(""), hora (""), descripcion(""), num_sala(0) {};//Constructor1 
    Cartelera(string tit, string gen, string hor, string desc, int sala): titulo(tit), genero(gen), hora(hor), descripcion(desc), num_sala(sala) {}; //Constructor2

    //getters
    string getTitulo(){
      return titulo;
    }
    string getGenero(){
      return genero;
    }
    string getHora(){
      return hora;
    }
    string getDescripcion(){
      return descripcion;
    }
    int getNum_sala(){
      return num_sala;
    }

    //Otros métodos
    void agrega_titulo(string titulo);
    void elimina_titulo(string titulo);
    void agrega_hora(string hora);
    void elimina_hora(string hora);
    void agrega_descripcion(string descripcion);
    void elimina_descripcion(string descripcion);
};
#endif