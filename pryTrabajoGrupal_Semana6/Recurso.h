#pragma once

#include <cstdlib>
#include <ctime>
#include "ArregloEnemigo.h"
#include "ArregloArbol.h"
#include "ArregloAgua.h"
#include "ArregloSemillas.h"
#include "ArregloReciclable.h"

class Recurso {
	ArrSemillas semillasArr;
	ArrAgua aguaArr;
	ArrEnemigo enemigoArr;
public:
	Recurso() {
		srand(time(0));
	}
	void generarRecursos() {
		for (int i = 0; i < 3; i++) {
			int x = rand() % 87;
			int y = rand() % 33;
			Semillas* nuevaSemilla = new Semillas(x, y);
			semillasArr.agregarSemillas(nuevaSemilla);
			nuevaSemilla->dibujar_semilla();
		}
		for (int i = 0; i < 3; ++i) {
			int x = rand() % 87;
			int y = rand() % 33;
			Agua* nuevoAgua = new Agua(x, y);
			aguaArr.agregarAgua(nuevoAgua);
			nuevoAgua->dibujar_agua(x, y);
		}

		for (int i = 0; i < 3; ++i) {
			int x = rand() % 87;
			int y = rand() % 33;
			Enemigo* nuevoEnemigo = new Enemigo(x, y);
			enemigoArr.agregarEnemigo(nuevoEnemigo);
			nuevoEnemigo->dibujar_enemigo();
		}
	}


};