#pragma once
#include "ArregloEnemigo.h"//Librerias 1
#include "Recurso.h"//Librerias 2
#include "Jugador.h";//Jugador

int vidas = 100;
int semillas = 0;
int agua = 0;
int reciclable = 0;
int arbol = 0;
class ColisionEnemigo : public Jugador, public ArrEnemigo {//Creando clase con herencia aplicada

public://El enemigo nos toca -> constructor de nuestra clase -> luego de jugador -> luego de arreglo de enemigos
	ColisionEnemigo(int x, int y) : Jugador(), ArrEnemigo() {

	}



	void quitarvida() {// Quitando vidas del jugador

		for (int i = 0; i < arreglo1.size(); i++) {//vamos desde el inicio del vector hast el ultimp

			int EnmX = arreglo1.at(i)->getEnmX();//Obtenemos la posicion del enemigo en X
			int EnmY = arreglo1.at(i)->getEnmY();//lo mismo pero en y
			//Si el jugador esta dentro de estos limites, entonces significa que recibio daño
			if ((x_P == EnmX || x_P == EnmX + 1 == x_P == EnmX - 1 || x_P == EnmX + 2 || x_P == EnmX - 2 || x_P == EnmX + 3 == x_P == EnmX - 3 || x_P == EnmX + 4 || x_P == EnmX - 4) == true &&
				(y_P == EnmY || y_P == EnmY + 1 == y_P == EnmY - 1 || y_P == EnmY + 2 || y_P == EnmY - 2 || y_P == EnmY + 3 || y_P == EnmY - 3 || y_P == EnmY + 4 || y_P == EnmY - 4) == true) {
		
				vidas--;
				Console::Title = "Recibiste daño";//imprimimos un titulo pequeno en la parte de arriba de la consola
			}


		}
	}
};

class ObtenerRecurso : public Jugador, public Recurso, public ArrSemillas, public ArrAgua, public ArrReciclables {
public://atrapan el queso -> constructor de nuestra clase -> luego del raton -> luego del queso
	ObtenerRecurso(int x, int y) : Jugador(), Recurso() ,ArrSemillas(),ArrAgua(),ArrReciclables(){}
	void ObtenerSemilla() {// Obtener recurso

		for (int i = 0; i < arreglo4.size(); i++) {//vamos desde el inicio del vector hast el ultimp

			int sX = arreglo4.at(i)->getSmiX();
			int sY = arreglo4.at(i)->getSmiY();
			if ((x_P == sX) == true && (y_P == sY) == true) {
				//pasamos a limpiar el espacio usado en la consola del recurso
				arreglo4.at(i)->borrar_semilla();
				arreglo4.at(i)->setSmiX(0);//seteamos la posiciona 0 a X
				arreglo4.at(i)->setSmiY(0);//seteamos la posicion en 0 a Y
				arreglo4.at(i)->borrar_semilla();//Limpiamos una ultima vez el recurso
				arreglo4.erase(arreglo4.begin() + i);//eliminamos el recurso del arreglo.
				semillas++;
			}


		}
	}

	void ObtenerAgua() {// Obtener recurso

		for (int i = 0; i < arreglo3.size(); i++) {//vamos desde el inicio del vector hast el ultimp

			int aX = arreglo3.at(i)->getAguaX();
			int aY = arreglo3.at(i)->getAguaY();
			if ((x_P == aX) == true && (y_P == aY) == true) {
				//pasamos a limpiar el espacio usado en la consola del recurso
				arreglo3.at(i)->borrar_agua();
				arreglo3.at(i)->setAguaX(0);//seteamos la posiciona 0 a X
				arreglo3.at(i)->setAguaY(0);//seteamos la posicion en 0 a Y
				arreglo3.at(i)->borrar_agua();//Limpiamos una ultima vez el recurso
				arreglo3.erase(arreglo3.begin() + i);//eliminamos el recurso del arreglo.
				agua++;
			}


		}
	}
	void ObtenerReciclable() {// Obtener recurso

		for (int i = 0; i < arreglo5.size(); i++) {//vamos desde el inicio del vector hast el ultimp

			int rX = arreglo5.at(i)->getReciX();
			int rY = arreglo5.at(i)->getReciX();
			if ((x_P == rX) == true && (y_P == rY) == true) {
				//pasamos a limpiar el espacio usado en la consola del recurso
				arreglo5.at(i)->borrar_residuo();
				arreglo5.at(i)->setReciX(0);//seteamos la posiciona 0 a X
				arreglo5.at(i)->setReciY(0);//seteamos la posicion en 0 a Y
				arreglo5.at(i)->borrar_residuo();//Limpiamos una ultima vez el recurso
				arreglo5.erase(arreglo5.begin() + i);//eliminamos el recurso del arreglo.
				reciclable++;
			}


		}
	}
};
