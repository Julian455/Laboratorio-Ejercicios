/*
 * nexo.h
 *
 *  Created on: 11 oct. 2022
 *      Author: julia
 */
//careptas relacionas por eso se crea el nexo.c y nexo .h
#include "eSector.h"
#include "eEmpleado.h"

#ifndef NEXO_H_
#define NEXO_H_

eEmpleado pedirDatosEmpleadoNexo(int id,eSector listaSector[],int tamSector);
int altaNexo(eEmpleado lista[],int tam,int id,eSector listaSector[],int tamSector);
void mostrarUnoNexo(eEmpleado empleado,eSector listaSector[],int tamSector);
int mostrarTodosNexo(eEmpleado lista[],int tam,eSector listaSector[],int tamSector);
//int bajaNexo(eEmpleado lista[],int tam,eSector listaSector[],int tamSector );
int bajaNexo(eSector listaSector[],int tamSector,int id );

#endif /* NEXO_H_ */
