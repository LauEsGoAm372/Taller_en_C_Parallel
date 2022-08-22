/***************************************************
* Fecha: Agosto-2022
* Autor: Laura Gomez
* Tema: Introducciòn a la programaciòn C
* Tòpico: Programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
****************************************************/
#include "ejercicio_lib.h"
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	
	int desea=0;
	
	printf("\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	printf("\n   -        BIenvenido a tu programa favorito multifunciones        -  \n");
		
	
	/* Consola que muestra las opciones y captura la opcion deseada, validando que 
	no ingrese valores negativos o fuera del rango de opciones */
        do{
          printf("\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
          printf("\nEstas son las funciones disponibles:       \n");
	  printf("\n1. Funciòn que recibe 2 enteros y calcula el producto de los 2 enteros.");
	  printf("\n2. Funciòn que convierte los días especificados en años, semanas y días.");
	  printf("\n3. Funciòn que calcula la distancia entre  dos puntos.");
	  printf("\n4. Funciòn que muestra los 10 primeros números naturales.");
	  printf("\n5. Funciòn que muestra el patrón como triángulo rectángulo usando un asterisco.");
	  printf("\n6. Funciòn que imprime una matriz de “1”, de tamaño NxN.");
	  printf("\n7. Funciòn que imprime una matriz de números aleatorios enteros, entre 0 y 9 ");
	  printf("\n dede tamaño NxN. ");
	  printf("\n8. Funciòn que imprime dos matrices de números aleatorios, entre 0 y 9, ");
	  printf("\n dede tamaño NxN e imprime la suma de las dos matrices. ");
	  printf("\n9. Funciòn que imprime dos matrices de números aleatorios, entre 0 y 9, ");
	  printf("\n dede tamaño NxN e imprime la resta de las dos matrices. ");
	  printf("\n10. Funciòn que imprime dos matrices de números aleatorios, entre 0 y 9, ");
	  printf("\n dede tamaño NxN e imprime el producto de las dos matrices. ");
	  printf("\n11. Para salir. \n");
	  printf("\nIngrese el numero de la opciòn deseada: ");
	  scanf("%d",&desea);
	  printf("\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	
	 llamar(desea);
	}while(desea>0 && desea <11);
	
	



return 0;
}






