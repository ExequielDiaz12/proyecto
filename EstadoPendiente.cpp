/*
 * EstadoPendiente.cpp
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#include "EstadoPendiente.h"
#include "EstadoEnProgreso.h"
#include "Tarea.h"
#include <iostream>
using namespace std;

void EstadoPendiente::moverTarea(Tarea& tarea){
	cout<<"moviendo tarea a 'En progreso'."<<endl;
	tarea.SetTarea(new EstadoEnProgreso());
}

void EstadoPendiente::tareaCompleta(Tarea& tarea){
	cout<<"tarea completa"<<endl;
}

