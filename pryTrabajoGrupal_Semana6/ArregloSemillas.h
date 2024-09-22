#pragma once
#include "Semillas.h"
class ArrSemillas
{
protected:
	vector<Semillas*>arreglo4;
public:
	ArrSemillas() {
		arreglo4 = vector<Semillas*>();
	};
	void agregarSemillas(Semillas* nuevoRecurso4) {
		arreglo4.push_back(nuevoRecurso4);
	}
	Semillas* obtenerSemillas(int indice4) {
		return arreglo4.at(indice4);
	}
	int sizeReciclables() {
		return arreglo4.size();
	}
	vector<Semillas*> retornar() {
		return arreglo4;
	}
	~ArrSemillas() {};
};