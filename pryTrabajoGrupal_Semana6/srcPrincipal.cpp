//SINOPSIS (De acuerdo al enunciado):			El jugador tomar� el rol de un "Guardi�n del Medio Ambiente" cuya misi�n es restaurar el equilibrio natural 
//												de un ecosistema que ha sido da�ado por la contaminaci�n y la deforestaci�n								

#include "Fondo.h"
#include "Controladora.h"
#include "Recurso.h" 
int main() {
	wS(120, 36);
	Presentacion* objPresentacion;
	objPresentacion = new Presentacion;
	//Recurso* objRecurso = new Recurso;
	//Juego* objJuego;
	//objJuego = new Juego;

	while (1) {
		
		//Console::Title = secs.ToString();
		//objPresentacion->LOGO_EQUIPO(); // PANTALLA PRINCIPAL

		objPresentacion->MENU();
		//objPresentacion->TITULO_YOUWON_v2(21, 11);
		//objRecurso->generarRecursos();
		//objJuego->nivel_prueba();
		//objJuego->fondo1();
		return 0;
	}
}