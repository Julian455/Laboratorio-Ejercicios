/*
 * eEmpleado.h
 *
 *  Created on: 9 oct. 2022
 *      Author: julia
 */

#include "imput.h"
#define LEN_CHARS 51

#ifndef EEMPLEADO_H_
#define EEMPLEADO_H_


typedef struct{
	int id;
	char nombre[LEN_CHARS];
	char apellido[LEN_CHARS];
	float salario;
	int sector;
	int isEmpty;
}eEmpleado;

int inicializarEstructuraEmp(eEmpleado lista [],int tam);
int buscarIndiceLibreEmp(eEmpleado lista[],int tam);
eEmpleado pedirDatosEmpleadoEmp(int id);
int alta(eEmpleado lista[],int tam,int id);
void mostrarUnoEmp(eEmpleado empleado);
int mostrarTodosEmp(eEmpleado lista[],int tam);
eEmpleado buscarPorIdEmp(eEmpleado lista[],int tam,int id);
int buscarPosicionPorIdEmp(eEmpleado lista[],int tam,int id);



#endif /* EEMPLEADO_H_ */
