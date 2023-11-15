/*
 * EstadoCompletado.cpp
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#include "EstadoCompletado.h"
#include "Tarea.h"
#include <iostream>
using namespace std;

void EstadoCompletado::moverTarea(Tarea& tarea){
	cout<<"La tarea está completa"<<endl;
	tarea.SetTarea(new EstadoCompletado());
}

void EstadoCompletado::tareaCompleta(Tarea& tarea){
	cout<<"tarea completa"<<endl;
}

