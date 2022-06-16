/*
 * Proyecto Cine clase Usuario
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase define objeto de tipo Usuario el cual tiene una relación de agregación con la clase Cine.
 * La finalidad de esta clase es el crear los asientos para que puedan ser accedidos por cine, que es la clase que nos va a estar controlando la mayor parte de movimientos, así como el mostrar el arreglo de los asientos dependiendo de las dimensiones de la sala, reservar un asiendo dependiendo de su disponibilidad y ver la cartelera que contiene un vector de todas las películas
*/

#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;

class Usuario{
  private: //Atributos
    string id;
    string met_Pago; //Recibe si el pago es efectivo o tarjeta
    string resumen_compra;
    double deber;
  public: 
    //Constructor copia
    Usuario(const Usuario& );

    //Constructores
    Usuario(); 
    Usuario(string, string); 

    //getters
    string getId();
    string getMet_Pago();
    void add_resumen_compra(string);
    void add_deber(int);
    //Otros métodos
    void cons_disp();
    bool reservar(int,int);
    void mostrar_reserva();
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

//Otros métodos

/**
 * mostrar_reserva imprime el resumen de la reservación generada en Cine
 *
 * utiliza el arreglo emp[] y el número de nómina, para recorre todo el
 * arreglo imprimiendo cada uno de los objetos  que coinciden con el
 * string tipo ("asalariado, por hora o practicante").
 *
 * @param 
 * @return
 */
void Usuario :: mostrar_reserva(){
  cout<<"-Resumen de su reservación-\n"<<resumen_compra<<endl;
}
#endif