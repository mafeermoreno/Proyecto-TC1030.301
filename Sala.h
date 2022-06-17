/*
 * Proyecto Cine clase Sala
 * María Fernanda Moreno Gómez
 * A01708653
 * 17/06/2022
 * Esta clase define objeto de tipo Sala, que tiene una relación con peliculas.
 * La finalidad de esta clase es mostrar para cada sala las peliculas, ya que tienen un vector de las películas que se vayan a proyectar en esa sala.
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

const int PELI = 6;
class Sala{
  private:
    Pelicula * vpeli[PELI];

  public: 
    int id;
    //Constructor
    Sala(): id(0){};

    //Otros métodos
    void crear_peliculas();
    void imprime_peliculas();
    void agrega_menores(int,string, int, string,string);
  void agrega_mayores(int,string, int, string, string);
};

/**
 * crear_pelicula crea objetos de tipo Pelicula
 *
Es un método que toma como referencia el vector vpeli, que es un apuntador a objetos de Pelicula, el cual va a crear las películas que están en la sala
 *
 * @param 
 * @return 
 */
void Sala :: crear_peliculas(){
  int contador=0;
  vpeli[id]=new Menores(id, "Barbie y el Cascanueces",80,"Fantasía","Barbie, que interpreta el papel de Clara, recibe un precioso Cascanueces de madera como regalo. Esa noche mientras Clara duerme, el Cascanueces cobra vida para rechazar el ataque del perverso Ratón que ha invadido el cuarto de la joven. Barbie, que interpreta el papel de Clara, recibe un precioso Cascanueces de madera como regalo. Esa noche mientras Clara duerme, el Cascanueces cobra vida para rechazar el ataque del perverso Ratón que ha invadido el cuarto de la joven.");
  id++;
  vpeli[id]=new Menores(id,"Barbie como Rapunzel",84,"Fantasía","Barbie cuenta la historia de Rapunzel, una princesa que es raptada por una bruja y obligada a vivir encerrada en una torre por el resto de su vida.");
  id++;
  vpeli[id]=new Menores(id, "Barbie la princesa y la plebeya", 85, "Fantasía", "Barbie cobra vida en esta moderna versión del famoso cuento clásico sobre un error de identidad y el poder de la amistad. Basada en la historia de El Principe y el Mendigo de Mark Twain.");
  contador++;
  vpeli[id]=new Menores(id, "Barbie y la magia del pegaso",85,"Fantasía","En un reino lejano, un brujo llamado Wenlock le pide al Rey la mano de su hija, la princesa Annika, una joven cuya pasión es patinar sobre hielo.");
  id++;
  vpeli[id]=new Mayores(id, "El Conjuro",112,"Terror","Basada en hechos reales. Narra los encuentros sobrenaturales que vivió la familia Perron en su casa de Rhode Island a principios de los 70.");
  contador++;
  vpeli[id]=new Mayores(id,"It",133, "Terror", "Varios niños de una pequeña ciudad del estado de Maine se alían para combatir a una entidad diabólica que adopta la forma de un payaso y desde hace mucho tiempo emerge cada 27 años para saciarse de sangre infantil.");
  id++;
  vpeli[id]=new Mayores(id,"Don't Worry Darling", 210, "Thriller psicológico", "Don't Worry Darling es una próxima película estadounidense del género thriller psicológico dirigida por Olivia Wilde. El guion fue escrito por Katie Silberman, basado en una historia de Carey van Dyke, Shane Van Dyke y Silberman.");
  id++;
  vpeli[id]=new Mayores(id, "My policeman", 113, "Romance","My Policeman es una próxima película de drama romántico dirigida por Michael Grandage. Está basada en la novela del mismo nombre de Bethan Roberts. Está protagonizada por Harry Styles, Emma Corrin y David Dawson.");
  id++;
}


/**
 * imprime_peliculas imprime las películas que se crearon en crear_peliculas
 *
Es un método que va a instanciar las clases de Menores y Mayores, no puede instanciar Peliculas pues esta es una clase abstracta. Una vez instanciadas, se añaden a un arreglo para consultarlo posteriormente.
 *
 * @param 
 * @return 
 */
void Sala::imprime_peliculas() {
  for (int i = 0; i < id; i++)
    cout << vpeli[i] -> mostrar_pelicula();
}

/**
 * agregar_menores añade una Pelicula de Menores al arreglo de peliculas
 *
Es un método que puede añadir más peliculas a la sala que ya está instanciada
 *
 * @param constructor de la clase Menores
 * @return 
 */
void Sala::agrega_menores(int id, string titulo, int duracion, string genero, string descripcion) {

  vpeli[id] = new Menores(id, titulo, duracion, genero, descripcion);
  id++;
}

/**
 * agregar_mayores añade una Pelicula de Mayores al arreglo de peliculas
 *
Es un método que puede añadir más peliculas a la sala que ya está instanciada
 *
 * @param constructor de la clase Mayores
 * @return 
 */
void Sala::agrega_mayores(int id, string titulo, int duracion, string genero, string descripcion) {

  vpeli[id] = new Mayores(id, titulo, duracion, genero, descripcion);
  id++;
}


#endif