/*
María Fernanda Moreno Gómez
Clase reserva, la cual tiene la posibilidad de que, según las dimensiones de la sala y los asientos disponibles, se creen los asientos o posiciones que el usuario puede escoger para reservar varios de ellos, también puede eliminar la reservación así como el ver el precio final de sus boletos adquiridos.
*/
#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
using namespace std;

class Reserva{
  private: //Atributos
    float precio;
  public: //Métodos
    //Constructores
    Reserva(): precio(0) {}; //Constructor1 
    Reserva(float prec): precio(prec) {}; //Constructor2

    //getters
    float getPrecio(){
      return precio;
    }

    //Otros métodos
    void cons_disp();
    void reservar();
    void eliminar_res();
    float pago_final();
};
#endif