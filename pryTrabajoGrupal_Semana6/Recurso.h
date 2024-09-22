#pragma once

#include "ArregloEnemigo.h"
#include "ArregloArbol.h"
#include "ArregloAgua.h"
#include "ArregloSemillas.h"
#include "ArregloReciclable.h"

int generarAleatorio(int M, int N) {

	int tam = rand() % (N - M + 1) + M;//GENERAMOS EL NUMERO ALEATORIO
	return tam;
}
class Recurso {
	ArrSemillas semillasArr;
	ArrAgua aguaArr;
	ArrReciclables reciclablesArr;
	

public:
	Recurso() {
		srand(time(0));
	}



	void generarRecursos() {
		for (int i = 0; i < 10; i++) {

			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Semillas* nuevaSemilla = new Semillas(x, y);
			semillasArr.agregarSemillas(nuevaSemilla);
			nuevaSemilla->dibujar_semilla();
		}
		for (int i = 0; i < 10; ++i) {
			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Agua* nuevoAgua = new Agua(x, y);
			aguaArr.agregarAgua(nuevoAgua);
			nuevoAgua->dibujar_agua();
		}
		for (int i = 0; i < 10; ++i) {
			int x = generarAleatorio(leftlimitx, rightlimitx);
			int y = generarAleatorio(uplimity, downlimity);
			Reciclables* nuevoReciclables = new Reciclables(x, y);
			reciclablesArr.agregarReciclables(nuevoReciclables);
			nuevoReciclables->dibujar_residuo();
		}

	}

};
