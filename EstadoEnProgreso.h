/*
 * EstadoEnProgreso.h
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#ifndef ESTADOENPROGRESO_H_
#define ESTADOENPROGRESO_H_
#include "EstadoTarea.h"

class EstadoEnProgreso : public EstadoTarea{
public:
	void moverTarea(Tarea& tarea) override;
	void tareaCompleta(Tarea& tarea) override;
};

#endif /* ESTADOENPROGRESO_H_ */
