/*
 * EstadoPendiente.h
 *
 *  Created on: 15 nov. 2023
 *      Author: Usuario
 */

#ifndef ESTADOPENDIENTE_H_
#define ESTADOPENDIENTE_H_

#include "EstadoTarea.h"

class EstadoPendiente : public EstadoTarea {
public:
	void moverTarea(Tarea& tarea) override;
	void tareaCompleta(Tarea& tarea) override;
};

#endif /* ESTADOPENDIENTE_H_ */
