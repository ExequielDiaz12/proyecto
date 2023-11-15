/*
 * EstadoCompletado.h
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#ifndef ESTADOCOMPLETADO_H_
#define ESTADOCOMPLETADO_H_
#include "EstadoTarea.h"

class EstadoCompletado : public EstadoTarea{
public:
	void moverTarea(Tarea& tarea) override;
	void tareaCompleta(Tarea& tarea) override;
};

#endif /* ESTADOCOMPLETADO_H_ */
