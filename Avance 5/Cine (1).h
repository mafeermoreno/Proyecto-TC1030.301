/*
 * Proyecto Cine clase Cine
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase defina objeto de tipo Cine que tiene una relación de asociación con las clases de Usuario y Cartelera
 * La finalidad de esta clase es contener todas las funciones que estén vigentes, así como la información sobre cada una de ellas
 */

#ifndef CINE_H
#define CINE_H

#include <iostream>
#include <string>
#include <vector>
#include "Sala.h"
#include "Usuario.h"
using namespace std;

class Cine{
  private: 
    int num_salas;
    string nombre;
    string hora_at;
    vector<Sala*> vsala;
    int cont=0;
    int costo = 30;
    
  public: 
    //Constructor copia
    Cine(const Cine& );

    //Constructores
    Cine();
    Cine(int, string, string);

    //getters
    int getNum_salas();
    string getNombre();
    string getHora_at();

    //Otros métodos
    void agregar_sala(Sala*);
    void reservar_peli(Usuario*);
};

Cine :: Cine(const Cine& c){
  num_salas=c.num_salas;
  nombre=c.nombre;
  hora_at=c.hora_at;
  vsala.resize(num_salas);
};

Cine :: Cine(){
  num_salas=0;
  nombre="";
  hora_at="";
  vsala.resize(num_salas);
};

Cine :: Cine(int _num_salas, string _nombre, string _hora_at){
  num_salas=_num_salas;
  nombre=_nombre;
  hora_at=_hora_at;
  vsala.resize(num_salas);
};

//Getters
int Cine :: getNum_salas(){
  return num_salas;
};

string Cine :: getNombre(){
  return nombre;
};

string Cine :: getHora_at(){
  return hora_at;
};

//Otros métodos

void Cine:: agregar_sala(Sala*a){
  vsala.push_back(a);
}

/**
 * reservar_peli imprime
 *
 * utiliza el arreglo emp[] y el número de nómina, para recorre todo el
 * arreglo imprimiendo cada uno de los objetos  que coinciden con el
 * string tipo ("asalariado, por hora o practicante").
 *
 * @param puntero a objeto u de Usuario
 * @return
 */
void Cine::reservar_peli(Usuario*u){
  for(int i;i<vsala.size();i++){
    cout<<"Sala "<<vsala[i]->getId()<<": \n"<<endl;
    vsala[i]->mostrar_cartelera();
  }
  int p, q, f, c,n,cuenta=0, continuar;
  bool check;
  cout<<"Elige id de la sala de tu película: ";
  cin>>p;
  cout<<"Elige el id de tu película: ";
  cin>>q;
  cout<<"Elige el número de asientos a reservar: ";
  cin>>n;
  for(int i;i<n;i++){
    vsala[p]->mostrar_asientos();
    cout<<"Elige la fila de tu asiento: ";
    cin>>f;
    cout<<"Elige la columna de tu asiento: ";
    cin>>c;
    check=vsala[p]->reservar_asiento(f,c);
    if(check){
      string s;
      cuenta += 1;
      s="Compra:\nNúmero de sala sala: "+to_string(p)+"\nId de la película: "+to_string(q)+"\nAsiento(s) en las coordenadas: ["+to_string(f)+","+to_string(c)+"]\n";
      cout<<s<<endl;
      u->add_resumen_compra(s);
      u->add_deber(cuenta*costo);
    }
  }   
  cout<<"--Su reserva ha sido registrada--"<<endl;
  cout<<"Presione un número para finalizar\n";
  cin>>continuar;
  system("clear"); //Borra datos de pantalla 
}
#endif