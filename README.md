# Proyecto Cine-TC1030.301
Este proyecto Cine está hecho para observar los componentes de un cine. El proyecto en sí es sobre un cine, el cual, tiene un arreglo de salas, ya que para cada sala, se tienen películas distintas que son clasificadas dependiendo del público objetivo, es por eso que en esta clase Película, se tienen como clases hijas las clases de Menores y Mayores, que heredan todos sus atributos e implementan métodos que son llamados iguales pero que funcionan de distinta manera ya que cada clase se comporta de acuerdo al público objetivo de la película. Por eso, la estructura del proyecto es un cine, que está compuesto por varias salas (asociación de composición), y estas salas usan diferentes películas para ser proyectadas (asociación de agregación), mientras que esta9s películas se dividen entre si son mayores o menores de edad (asociación de herencia), esto es para realizar un recorte de créditos distinto en cada una de ellas así como una proyección de advertencia acorde al público objetivo.

# Funcionalidad
El programa sólo permite agregar directamente en el código películas que son clasificadas acorde al público objetivo:
Menores y Mayores.
El programa corre solo en la consola y no necesita de inputs.

# Consideraciones
El programa corre de manera autónomo en la consola sin necesidad de inputs. Además, el lenguaje en el que está escrito es C++, por lo que es necesario compilar cada clase con su respectiva extensión: Cine.h Sala.h, Pelicula.h, Mayores.h, Menores.h, main.cpp

# Correcciones
