/*
María Fernanda Moreno Gómez
Clase sala, la cual especifica las dimensiones de la sala en asientos y columnas 
*/
#ifndef SALA_H
#define SALA_H

#include <iostream>
using namespace std;

class Sala{
  private: //Atributos
    int num_filas;
    int num_columnas;
  public: //Métodos
    //Constructores
    Sala(): num_filas(0), num_columnas(0) {};//Constructor1 
    Sala(int num_f, int num_c): num_filas(num_f), num_columnas(num_c) {}; //Constructor2

    //getters
    int getNum_filas(){
      return num_filas;
    }
    int getNum_columnas(){
      return num_columnas;
    }

    //Otros métodos
    int num_asientos(int num_filas, int num_columnas);
};
#endif