/*
 * eSector.h
 *
 *  Created on: 10 oct. 2022
 *      Author: julia
 */

#ifndef ESECTOR_H_
#define ESECTOR_H_
#include "imput.h"
#define LEN_DESCRIPCION 60

typedef struct{
	int id;
	char descripcion[LEN_DESCRIPCION];
	//siempre que tengamos una estructura dps esa estructura se va a convertir en un array
	//de estructuras  me hago la bandera de campo isEmpty
	int isEmpty;
}eSector;


int inicializarEstructuraSector(eSector lista[],int tam);
int buscarIndiceLibreSector(eSector lista[],int tam);
eSector pedirDatos();
int altaSector(eSector lista[],int tam);
void mostrarUnoSector(eSector sector);
int mostrarTodosSector(eSector lista[],int tam);
eSector buscarUnoPorIdSector(eSector listaSector[],int tamSector,int id);

#endif /* ESECTOR_H_ */
