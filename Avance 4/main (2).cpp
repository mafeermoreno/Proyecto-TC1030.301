/*
María Fernanda Moreno Gómez A01708653
Avance #2
Programa que trabaja acerca de un cine, el cual tiene una cartelera, con la que puedes ver las películas de acuerdo a la clasificación que se tiene y de esta manera ver si la película corta o no los créditos por advertencia.
En esta parte es donde se implementó el polimorfismo, pues se declaró en la clase padre "Película", los métodos de recorta y advertencia, donde va a recortar la pelíucla si es para menores de edad o va a agregar duración a la pelíucla cuando es para mayores de edad, pues se va a poner una advertencia así como un recorte de créditos
*/
#include <iostream>
#include <stdlib.h>
#include <string>
//Incluir las clases anteriormente declarados
#include "Cartelera.h"
#include "Cine.h"
#include "Usuario.h"
#include "Sala.h"
#include "Menores.h"
#include "Mayores.h"
using namespace std;


int main() {
  string d,r;

  /*
  //Crear objeto
  Cine cinepolis;
  cinepolis.getNombre();
  cinepolis.getHorario_atencion();
  cinepolis.getNum_salas();

  Cartelera peliculas;
  peliculas.getDescripcion();
  peliculas.getGenero();
  peliculas.getNum_sala();
  peliculas.getTitulo();
  peliculas.getHora();

  Sala num1;
  num1.getNum_columnas();
  num1.getNum_filas();
  */

  //Inicio de la parte de polimorfismo, incluído en las clases "Película" (clase padre) y "Mayores", "Menores" (clases hijas que heredan los métodos de recorte y advertencia, en recorte podemos ver el término de clase abstracta y en advertencia un polimorfismo únicamente)
  Menores*p;
  d="Pelicula de un villano que quiere redención";
  Menores p1("Ralph",90,"Animada",d);
 
 cout<<"Pelicula menores de edad : \n"<<endl; 
  cout<<"Duración peli normal: "<< p1.getDuracion()<< endl;
p1.advertencia();
  cout<<"Duración peli con advertencia: "<< p1.getDuracion()<< endl;
  p1.recorte();
  cout<<"Duración peli con recorte:  "<< p1.getDuracion()<< endl;
  
  Menores p2(p1); 
cout<<"Nombre titulo copia: "<<p2.getTitulo()<<"\n"<<endl;

  //Maratón de películas de Ralph el demoledor con un operador sobrecargado
  p=p1+&p2;
cout<<"Duración maraton "<<p->getDuracion()<<"\n"<<endl;

  
cout<<"Pelicula mayores de edad : \n"<<endl;
  r="Pelicula de terror de personas poseidas";
  Mayores q1("Conjuro",80,"Terror",r);
  cout<<"Duración peli normal: "<< q1.getDuracion()<< endl;
q1.advertencia();
  cout<<"Duración peli con advertencia: "<< q1.getDuracion()<< endl;
  q1.recorte();
  cout<<"Duración peli con recorte:  "<< q1.getDuracion()<< endl;

  Mayores q2(q1);
cout<<"Nombre titulo copia: "<<q2.getTitulo()<<endl;
  
  return 0;
}