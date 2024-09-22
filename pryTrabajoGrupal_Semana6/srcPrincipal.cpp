//SINOPSIS (De acuerdo al enunciado):			El jugador tomará el rol de un "Guardián del Medio Ambiente" cuya misión es restaurar el equilibrio natural 
//												de un ecosistema que ha sido dañado por la contaminación y la deforestación								

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