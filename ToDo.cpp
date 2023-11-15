//============================================================================
// Name        : ToDo.cpp
// Author      : Exequiel Diaz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Tarea.h"
#include "EstadoTarea.h"
#include "EstadoPendiente.h"
#include "EstadoEnProgreso.h"
#include "EstadoCompletado.h"

int main() {
	Tarea tarea("Hacer resumen calculo","estudiar sobre antiderivadas para el quiz", new EstadoPendiente());

	tarea.mover();
	tarea.completo();

	tarea.mover();
	tarea.completo();

	return 0;
}
