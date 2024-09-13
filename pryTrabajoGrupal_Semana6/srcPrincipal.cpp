//SINOPSIS:			El jugador tomar� el rol de un "Guardi�n del Medio Ambiente" cuya misi�n es restaurar el equilibrio natural 
//					de un ecosistema que ha sido da�ado por la contaminaci�n y la deforestaci�n

#include "Controladora.h"
int main() {
	wS(180, 60);

	clock_t t, ts; //VARAIBLES PARA SABER EL TIEMPO
	int secs = 0;
	ts = clock() + CLOCKS_PER_SEC;

	Presentacion* objPresentacion;
	objPresentacion = new Presentacion;

	Juego* objJuego;
	objJuego = new Juego;

	while (1) {
		if ((t = clock()) >= ts)
		{
			++secs;
			ts = t + CLOCKS_PER_SEC;
		}
		Console::Title = secs.ToString();
		//objPresentacion->PRESENTACION_539_15_v2(11,10);
		objJuego->nivel();
	}
	return 0;
}