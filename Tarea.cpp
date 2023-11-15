/*
 * Tarea.cpp
 *
 *  Created on: 14 nov. 2023
 *      Author: Usuario
 */

#include "Tarea.h"
#include "EstadoTarea.h"
#include <iostream>

int Tarea::tareasCreadas = 0;

Tarea::Tarea(const string &nombre, const string &descripcion, EstadoTarea* estado)
:id(tareasCreadas++),nombre(nombre),descripcion(descripcion),estado(estado){}

void Tarea::SetTarea(EstadoTarea* nuevoEstado){
	delete estado;
	estado = nuevoEstado;
}

void Tarea::mover(){
	estado->moverTarea(*this);
}

void Tarea::completo(){
	estado->tareaCompleta(*this);
}

Tarea::~Tarea() {
	delete estado;
}

Tarea::Tarea(const Tarea &other) {
	// TODO Auto-generated constructor stub

}

