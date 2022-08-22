#/***************************************************
#* Fecha: Agosto-2022
#* Autor: Laura Gomez
#* Tema: Introducciòn a la programaciòn C
#* Tòpico: Programa en C que acepte dos enteros del usuario y calcule el producto de los
#dos enteros.
#****************************************************/
#
GCC = gcc
GFLAGS = -ansi -pedantic -Wall -std=c99
PROGRAMAS = ejercicio_main

ejercicio_main:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c ejercicio_lib.c -lm
	$(GCC) $(GFLAGS) -o $@ $@.o ejercicio_lib.o -lm
	
clean:
	$(RM) *.o $(PROGRAMAS)
