/*
 * EstadoTarea.h
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#ifndef ESTADOTAREA_H_
#define ESTADOTAREA_H_
class Tarea;

class EstadoTarea {
public:
	virtual void moverTarea(Tarea& tarea) = 0;
	virtual void tareaCompleta(Tarea& tarea) = 0;
	virtual ~EstadoTarea(){};
};

#endif /* ESTADOTAREA_H_ */
