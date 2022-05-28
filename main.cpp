/*
María Fernanda Moreno Gómez A01708653
Avance #2
Programa que trabaja acerca de un cine, el cual tiene salas, una cartelera, con la que puedes hacer una reserva para poder ver la función
Este main contiene las clases de Cartelera, Cine, Reserva y Sala, no se utilizó herencia, pues la herencia utiliza la frase "es un" y en el cine no se utiliza este tipo, sino que se utiliza agregación por la frase "usa un" y composición por la frase "tiene un"
Apenas es un avance, no se incluyeron todos los métodos, únicamente se están representando los conceptos de herencial (el cual, no necesité pues no tengo ninguna relación de "es un"), sobrecarga y sobrescritura así como métodos de acceso.
*/
#include <iostream>
//Incluir las clases anteriormente declarados
#include "Cartelera.h"
#include "Cine.h"
#include "Reserva.h"
#include "Sala.h"
using namespace std;

int main() {

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

  Reserva usuario;
  usuario.getPrecio();
  
  return 0;
}