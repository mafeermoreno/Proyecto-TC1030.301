/*
María Fernanda Moreno Gómez
Clase cine, el cual, va a contener datos muy elementales como el nombre del cine, el horario de atención y el número de salas que este contiene
*/
#ifndef CINE_H
#define CINE_H

#include <iostream>
using namespace std;

class Cine{
  private: //Atributos
    int num_salas;
    string nombre;
    string horario_atencion;
  public: //Métodos
    //Constructores
    Cine(): num_salas(0), nombre(""), horario_atencion("") {}; //Constructor1 
    Cine(int num, string nom, string hor): num_salas(num), nombre(nom), horario_atencion(hor) {}; //Constructor2

    //getters
    int getNum_salas(){
      return num_salas;
    }
    string getNombre(){
      return nombre;
    }
    string getHorario_atencion(){
      return horario_atencion;
    }
};
#endif