/***************************************************
* Fecha: Agosto-2022
* Autor: Laura Gomez
* Tema: Introducciòn a la programaciòn C
* Tòpico: Programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
****************************************************/
#ifndef EJERCICIO_LIB_H_INCLUDED
#define EJERCICIO_LIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <stdbool.h>


/*Funciòn que valida el ingreso de enteros positivos*/
bool validar_negativo(int n);
/*Funciòn que recibe 2 enteros y calcula el producto de los 2*/
void multiplicar ();
/*Funciòn que convierte los dias en años,semanas y dias*/
void convertir();
/*Funciòn que calcula la distancia entre dos puntos*/
void distancia();
/*Funciòn que muestra los 10 primeros numeros naturales*/
void primeros_10();
/*Funciòn piramide de * */
void piramide();
/*Funciòn que imprime matriz de unos*/
void matriz_unos();
/*Funciòn que imprime matriz de numeros enteros aleatorios*/
void matriz_llena();
/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y la suma de las matrices*/
void suma_matrices();
/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y la resta de las matrices*/
void resta_matrices();
/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y el producto de las matrices*/
void producto_matrices();
/*Funciòn invoca a las funciones segùn la opciòn ingresada*/
void llamar (int opcion);

#endif
