#pragma once
#include "Enemigo.h"
class ArrEnemigo
{
protected:
	vector<Enemigo*>arreglo1;
public:
	ArrEnemigo() {
		arreglo1 = vector<Enemigo*>();
	};
	void agregarEnemigo(Enemigo* nuevoRecurso1) {
		arreglo1.push_back(nuevoRecurso1);
	}
	Enemigo* obtenerEnemigo(int indice1) {
		return arreglo1.at(indice1);
	}
	int sizeEnemigo() {
		return arreglo1.size();
	}
	vector<Enemigo*> retornar() {
		return arreglo1;
	}

	~ArrEnemigo() {};
};