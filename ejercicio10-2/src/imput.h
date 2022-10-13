/*
 * imput.h
 *
 *  Created on: 9 oct. 2022
 *      Author: julia
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef IMPUT_H_
#define IMPUT_H_


void formarApellidoNombre(char*pNombre,char*pApellido,char*pCompleto);
void pedirChar(char*mensaje,char*nombre,int largoNombre);
int obtenerRango(char*mensaje,int min,int max);
float obtenerRangoFloat(char*mensaje,int min,int max);




#endif /* IMPUT_H_ */
