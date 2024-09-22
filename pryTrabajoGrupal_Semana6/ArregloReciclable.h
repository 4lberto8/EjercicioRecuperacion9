#pragma once
#include "Reciclables.h"
class ArrReciclables
{
protected:
	vector<Reciclables*>arreglo5;
	int x;
	int y;
public:
	ArrReciclables() {
		arreglo5 = vector<Reciclables*>();
	};
	void agregarReciclables(Reciclables* nuevoRecurso5) {
		arreglo5.push_back(nuevoRecurso5);
	}
	Reciclables* obtenerReciclables(int indice5) {
		return arreglo5.at(indice5);
	}
	int sizeReciclables() {
		return arreglo5.size();
	}
	vector<Reciclables*> retornar() {
		return arreglo5;
	}
	~ArrReciclables() {};
};