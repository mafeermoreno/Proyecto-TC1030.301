/*
 * Proyecto Cine main
 * María Fernanda Moreno Gómez
 * A01708653
 * 13/06/2022
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a Objetos. Es un programa que guarda varias películas de un cine, donde se pueden mostrar las salas en donde están estas películas así como información de cada sala para que el cine pueda ver el manejo de su empresa.
 */

#include <iostream>
#include <stdlib.h>
#include <string>
//Incluir las clases anteriormente declarados
#include "Sala.h"
#include "Menores.h"
#include "Mayores.h"
using namespace std;

int main() {
  Sala sala1;
  sala1.crear_peliculas();
  sala1.imprime_peliculas();
  //void agrega_menores()
}
//Me basé en el proyecto demo para hacer este programa: https://replit.com/@MaferMoreno/Proyecto-Demo-Benja#Empresa.h
