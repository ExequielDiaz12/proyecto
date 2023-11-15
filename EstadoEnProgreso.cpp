/*
 * EstadoEnProgreso.cpp
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#include "EstadoEnProgreso.h"
#include "EstadoCompletado.h"
#include "Tarea.h"
#include <iostream>
using namespace std;

void EstadoEnProgreso::moverTarea(Tarea& tarea){
	cout<<"moviendo tarea a 'completado'."<<endl;
	tarea.SetTarea(new EstadoCompletado());
}

void EstadoEnProgreso::tareaCompleta(Tarea& tarea){
	cout<<"tarea completa"<<endl;
}

