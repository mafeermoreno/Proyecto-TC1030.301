/*
 * Proyecto Cine clase Sala
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 * Esta clase define objeto de tipo Sala el cual tiene una relación de composición con la clase Cine.
 * La finalidad de esta clase es el crear los asientos para que puedan ser accedidos por cine, que es la clase que nos va a estar controlando la mayor parte de movimientos, así como el mostrar el arreglo de los asientos dependiendo de las dimensiones de la sala, reservar un asiendo dependiendo de su disponibilidad y ver la cartelera que contiene un vector de todas las películas
*/

#ifndef SALA_H
#define SALA_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <vector>
#include "Pelicula.h"
#include "Menores.h"
#include "Mayores.h"
using namespace std;

class Sala{
  private: 
    int num_filas;
    int num_columnas;
    vector<Pelicula*>vpeli;
    int id;

  public: 

    //Constructores
    Sala();
    Sala(int, int, int);

    //getters
    int getNum_filas(){
      return num_filas;
    }
    int getNum_columnas(){
      return num_columnas;
    }
    int getId(){
      return id;
    }

    //Otros métodos
    void hacer_asientos();
    void mostrar_asientos();
    bool reservar_asiento(int,int);
    void mostrar_cartelera();
    vector<Pelicula*> getVpeli();
    void crear_peliculas();
    void eliminar_pelicula();
    void agregar_pelicula();
};

Sala :: Sala(){
  num_filas=0;
  num_columnas=0;
};

vector<Pelicula*> Sala::getVpeli(){
  return vpeli;
}

Sala :: Sala(int _num_filas, int _num_columnas){
  num_filas=_num_filas;
  num_columnas=_num_columnas;
};

void Sala :: crear_peliculas(){
  int contador=0;
  vpeli[contador]=new Menores(contador, "Barbie y el Cascanueces",80,"Fantasía","Barbie, que interpreta el papel de Clara, recibe un precioso Cascanueces de madera como regalo. Esa noche mientras Clara duerme, el Cascanueces cobra vida para rechazar el ataque del perverso Ratón que ha invadido el cuarto de la joven. Barbie, que interpreta el papel de Clara, recibe un precioso Cascanueces de madera como regalo. Esa noche mientras Clara duerme, el Cascanueces cobra vida para rechazar el ataque del perverso Ratón que ha invadido el cuarto de la joven.");
  contador++;
  vpeli[contador]=new Menores(contador, "Barbie como Rapunzel",84,"Fantasía","Barbie cuenta la historia de Rapunzel, una princesa que es raptada por una bruja y obligada a vivir encerrada en una torre por el resto de su vida.");
  contador++;
  vpeli[contador]=new Menores(contador, "Barbie la princesa y la plebeya", 85, "Fantasía", "Barbie cobra vida en esta moderna versión del famoso cuento clásico sobre un error de identidad y el poder de la amistad. Basada en la historia de El Principe y el Mendigo de Mark Twain.");
  contador++;
  vpeli[contador]=new Menores(contador, "Barbie y la magia del pegaso",85,"Fantasía","En un reino lejano, un brujo llamado Wenlock le pide al Rey la mano de su hija, la princesa Annika, una joven cuya pasión es patinar sobre hielo.");
  contador++;
  vpeli[contador]=new Mayores(contador, "El Conjuro",112,"Terror","Basada en hechos reales. Narra los encuentros sobrenaturales que vivió la familia Perron en su casa de Rhode Island a principios de los 70.");
  contador++;
  vpeli[contador]=new Mayores(contador,"It",133, "Terror", "Varios niños de una pequeña ciudad del estado de Maine se alían para combatir a una entidad diabólica que adopta la forma de un payaso y desde hace mucho tiempo emerge cada 27 años para saciarse de sangre infantil.");
  contador++;
  vpeli[contador]=new Mayores(contador,"Don't Worry Darling", 210, "Thriller psicológico", "Don't Worry Darling es una próxima película estadounidense del género thriller psicológico dirigida por Olivia Wilde. El guion fue escrito por Katie Silberman, basado en una historia de Carey van Dyke, Shane Van Dyke y Silberman.");
  contador++;
  vpeli[contador]=new Mayores(contador, "My policeman", 113, "Romance","My Policeman es una próxima película de drama romántico dirigida por Michael Grandage. Está basada en la novela del mismo nombre de Bethan Roberts. Está protagonizada por Harry Styles, Emma Corrin y David Dawson.");
  contador++;
};

void Sala:: agregar_pelicula(Pelicula*a){
  vpeli.push_back(a);
}

void Sala :: void eliminar_pelicula(Pelicula*a){
  int posicion;
  mostrar_cartelera();
  cout<<"Ingrese el id de la película a eliminar: "
  cin>>posicion;
  vpeli.erase(vpeli..begin()+posicion--);
};

void Sala :: hacer_asientos(){
  int asientos [num_filas][num_columnas];
  for(int i=0; i<num_filas; i++){
    for(int j=0; j<num_columnas; j++){
      asientos[i][j]=0;
    }
  }
};

void Sala :: mostrar_asientos(){
  cout<<"         -Pantalla-            "<<endl;
  int asientos [num_filas][num_columnas];
  for (int i=0; i<=num_columnas; i++){
    if (i==0){
      cout<<"   ";
    }
    else{
      cout<<"("<<i<<")";
    }
  }
  cout<<"\n";
  for(int i=0; i<num_filas; i++){
    cout<<"("<<i+1<<")";
    for(int j=0; j<num_columnas; j++){
      cout<<"["<<asientos[i][j]<<"]";
    }
    cout<<"\n";
  }
  for (int i=0; i<=num_columnas; i++){
    if (i==0){
      cout<<"    ";
    }
    else{
      cout<<"("<<i<<")";
    }
  }
  cout<<"\n";
};

bool Sala :: reservar_asiento(int num_filas, int num_columnas){
  int asientos [num_filas][num_columnas];
  if (asientos[num_filas][num_columnas]==0){
    asientos[num_filas][num_columnas]=1; 
    cout<<"Asiento reservado exitosamente\n";
    return true;//Se pudo reservar asiento
  }
  else{
    cout<<"Asiento ocupado, seleccione otro por favor\n";
  return false; //No se pudo reservar el asiento
    
  }
}
void Sala::mostrar_cartelera(){
  
  for(int i=0;i<vpeli.size();i++){
    cout<<"ID"<<vpeli[i]->getId()<<"\nNombre: "<<vpeli[i]->getTitulo()<<"\nDuración: "<<vpeli[i]->getDuracion()<<"\nDescripción: "<<vpeli[i]->getDescripcion()<<"\nGénero: "<<vpeli[i]->getGenero()<<"\nClasifiación: "<<vpeli[i]->getMayor_menor()<<endl;
  }
}
#endif