/*
 * Tarea.h
 *
 *  Created on: 14 nov. 2023
 *      Author: Usuario
 */

#ifndef TAREA_H_
#define TAREA_H_
#include <iostream>
using namespace std;

//class EstadoTarea;
#include "EstadoTarea.h";


class Tarea {
private:
	static int tareasCreadas;
	int id;
	string nombre;
	string descripcion;
	EstadoTarea* estado;
public:
	Tarea(const string &nombre, const string &descripcion, EstadoTarea* estado);
	virtual ~Tarea();
	Tarea(const Tarea &other);
	void SetTarea(EstadoTarea* nuevoEstado);
	void mover();
	void completo();
};

#endif /* TAREA_H_ */
