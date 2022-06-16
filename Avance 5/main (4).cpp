/*
 * Proyecto Cine main
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a Objetos. Es un programa que guarda varias películas de un cine, donde el usuario puede reservar un asiento dependiendo de la sala y de las películas que tienen esta sala. Al finalizar, se puede observar los datos de la reservación de acuerdo a lo escogido por el usuario
 */

#include <iostream>
#include <stdlib.h>
#include <string>
//Incluir las clases anteriormente declarados
#include "Cine.h"
#include "Usuario.h"
#include "Sala.h"
#include "Menores.h"
#include "Mayores.h"
using namespace std;


int main() {
  cout<<"Hello World"<<endl;
  /*
  string d,r;
  int opcion;

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
  cout<<"Duración peli con advertencia: "<<     q1.getDuracion()<< endl;
  q1.recorte();
  cout<<"Duración peli con recorte:  "<< q1.getDuracion()<< endl;

  Mayores q2(q1);
  cout<<"Nombre titulo copia: "<<q2.getTitulo()<<endl;*/
  /*
  do{
    showMenu();
    cout<<"Elija una opción del menú: \n";
    cin>>opcion;//chooseOption;
    switch(opcion)
    {
      case 0://Salir
        cout<<"Saliendo del sistema de reservaciones\n";
        //
        break;
      case 1:
        //Mostrar asientos disponibles
        cout<<"Asientos ocupados con 1"<<endl;
        cout<<"Asientos disponibles con 0"<<endl;
        cout<<"\n";
        showSeats();          
        break;
      case 2:
        //Reservar asiento
        showSeats();
        cout<<"Costo por boleto $"<<precioAsiento<<endl;
        do{
          cout<<"Favor de ingresar el numero de la fila(1-30)\n";
          cin>>fila;
          cout<<"Favor de ingresar el numero de la columna (1-4)\n";
          cin>>columna;
          fila--; //Ayuda a poner una fila menos que lo de tecleó 
          columna--; //Ayuda a poner una columna menos de lo que tecleó 
          }while(reserveSeat(fila, columna)==false);
          break;
      case 3:
        //calcular ventas
        cout<<"Los ingresos totales son de " <<calculateIncomes()<<endl;
        break;
      case 4:
        //Eliminar asiento reservado
        showSeats();
          do{
            cout<<"Favor de ingresar el numero de la fila(1-30)\n";
          cin>>fila;
          cout<<"Favor de ingresar el numero de la columna (1-4)\n";
          cin>>columna;
          fila--; //Ayuda a poner una fila menos que lo de tecleó 
          columna--; //Ayuda a poner una columna menos de lo que tecleó 
          }while(eliminateSeats(fila, columna)==false);
          break;
      default:
        cout<<"Valor no válido, ingrese otro número\n";
    } 
    //cin>>chooseOption;
    cout<<"Presione un número para continuar\n";
    cin>>continuar;
    system("clear");
    }while(chooseOption!=0);

    return 0;
  }*/
}
