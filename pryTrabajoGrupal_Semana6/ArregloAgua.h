#pragma once
#include "Agua.h"
class ArrAgua
{
protected:
	vector<Agua*>arreglo3;
	//int x_P = 60, y_P = 40;
public:
	ArrAgua() {
		arreglo3 = vector<Agua*>();
	};
	void agregarAgua(Agua* nuevoRecurso3) {
		arreglo3.push_back(nuevoRecurso3);
	}
	Agua* obtenerAgua(int indice3) {
		return arreglo3.at(indice3);
	}
	int sizeAgua() {
		return arreglo3.size();
	}
	vector<Agua*> retornar() {
		return arreglo3;
	}
	~ArrAgua() {};
};