//SINOPSIS (De acuerdo al enunciado):			El jugador tomar� el rol de un "Guardi�n del Medio Ambiente" cuya misi�n es restaurar el equilibrio natural 
//												de un ecosistema que ha sido da�ado por la contaminaci�n y la deforestaci�n								

#include "Controladora.h"
#include "Recurso.h" 
int main() {
	wS(120, 36);

	clock_t t, ts; //VARAIBLES PARA SABER EL TIEMPO
	int secs = 0;
	ts = clock() + CLOCKS_PER_SEC;

	Presentacion* objPresentacion;
	objPresentacion = new Presentacion;
	Recurso* objRecurso = new Recurso;
	Juego* objJuego;
	objJuego = new Juego;

	while (1) {
		if ((t = clock()) >= ts)
		{
			++secs;
			ts = t + CLOCKS_PER_SEC;
		}
		Console::Title = secs.ToString();
		//objPresentacion->LOGO_EQUIPO(); // PANTALLA PRINCIPAL


		//objPresentacion->MENU();
		//objPresentacion->TITULO_YOUWON_v2(21, 11);
		objRecurso->generarRecursos();
		objJuego->nivel_prueba();

		if (agua == 1 && semillas == 1 && recurso == 1) {

		}
		//objJuego->fondo1();
		return 0;
	}
}