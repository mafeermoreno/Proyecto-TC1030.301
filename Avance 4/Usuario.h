/*
María Fernanda Moreno Gómez
Clase reserva, la cual tiene la posibilidad de que, según las dimensiones de la sala y los asientos disponibles, se creen los asientos o posiciones que el usuario puede escoger para reservar varios de ellos, también puede eliminar la reservación así como el ver el precio final de sus boletos adquiridos.
*/
#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <string>
using namespace std;

class Usuario{
  private: //Atributos
    string id;
    string met_Pago; //Recibe si el pago es efectivo o tarjeta
  public: 
    //Constructor copia
    Usuario(const Usuario& );

    //Constructores
    Usuario(); 
    Usuario(string, string); 

    //getters
    string getId();
    string getMet_Pago();

    //Otros métodos
    void cons_disp();
    void reservar();
    void eliminar_res();
    float pago_final();
};

//Constructores
Usuario :: Usuario(string _id, string _met_Pago){
  id=_id;
  met_Pago=_met_Pago;
};

Usuario :: Usuario(const Usuario& a){
    id=a.id;
    met_Pago=a.met_Pago;
};

Usuario :: Usuario(){
  id="";
  met_Pago="";
};

//Getters

string Usuario:: getId(){
  return id;
};

string Usuario::getMet_Pago(){
  return met_Pago;
};

#endif