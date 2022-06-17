# Proyecto Cine-TC1030.301
Este proyecto Cine está hecho para observar las películas de una sala de cine. El proyecto en sí es sobre una sala, tiene películas distintas que son clasificadas dependiendo del público objetivo, es por eso que en esta clase Película, se tienen como clases hijas las clases de Menores y Mayores, que heredan todos sus atributos e implementan métodos que son llamados iguales pero que funcionan de distinta manera ya que cada clase se comporta de acuerdo al público objetivo de la película. Por eso, la estructura del proyecto es una sala de cine que tiene películas que se dividen entre si son mayores o menores de edad (asociación de herencia), esto es para realizar un recorte de créditos distinto en cada una de ellas así como una proyección de advertencia acorde al público objetivo.

# Funcionalidad
El programa sólo permite agregar directamente en el código películas que son clasificadas acorde al público objetivo:
Menores y Mayores.
El programa corre solo en la consola y no necesita de inputs.

# Consideraciones
El programa corre de manera autónomo en la consola sin necesidad de inputs. Además, el lenguaje en el que está escrito es C++, por lo que es necesario compilar cada clase con su respectiva extensión: Sala.h, Pelicula.h, Mayores.h, Menores.h, main.cpp

# Correcciones
-En la parte de diagrama UML, añadí una herencia entre la clase Padre Pelicula y sus clases hijas Mayores y Menores <<
-En la parte del código, añadí la parte de herencia en la clase Pelicula, que hereda a Mayores y Menores, se puede ver esto ya que en los constructores de las líneas 21 a 26 de las clases Mayores y Menores se nota que heredan de Pelicula sus atributos, además de que en la declaración de las clases, se hereda directamente a película. <<
-La parte de sobrecarga y sobreescritura de métodos se implementó en el código en la clase Pelicula, donde se agregan dos constructores en las líneas 33 y 34 así como el que se sobreescriban las líneas 45 y 46 de Película para que sus clases hijas, que son Menores y Mayores, implementen cada una una cosa distinta en las líneas 45 a 61. <<
-La parte de polimorfismo se incluyó en las líneas 45 y 46 de la clase Pelicula, ya que estas líneas al ser ejecutadas en sus clases heredadas (Mayores y Menores), hacen cosas de acuerdo a la característica de su clase, por ejemplo, advertencia() en Mayores pone una advertencia que la película es apta para mayores de edad y hace un recorte_creditos de 3 minutos mientras que para la clase Menores, advertencia() pone una advertencia que la película es apta para todo el público y en recorte_creditos recorta los créditos de la película hasta 8 minutos. <<
