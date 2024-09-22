//SINOPSIS (De acuerdo al enunciado): 
// El jugador tomará el rol de un "Guardián del Medio Ambiente" cuya misión es restaurar el equilibrio natural 
// de un ecosistema que ha sido dañado por la contaminación y la deforestación

#include "Fondo.h"
#include "Controladora.h"
#include "Recurso.h"
#include "Juego.h"
using namespace std;

int main() {
    wS(120, 36);
    Presentacion* objPresentacion = new Presentacion;
    Recurso* objRecurso = new Recurso;
    Juego* objJuego = new Juego;

    // Instanciar el jugador en una posición específica
    Jugador jugador(57, 20); // Usamos el constructor por defecto y luego asignamos la posición si es necesario

    // Crear las instancias de colisión
    colisionRecurso colSemillas(jugador, 0, 0);
    colisionRecurso2 colAgua(jugador, 0, 0);
    colisionRecurso3 colReciclables(jugador, 0, 0);

    while (1) {
        //Console::Title = secs.ToString();
        //objPresentacion->LOGO_EQUIPO(); // PANTALLA PRINCIPAL
        //objPresentacion->MENU();
        //objPresentacion->TITULO_YOUWON_v2(21, 11);

        objRecurso->generarRecursos();
        objJuego->nivel_prueba();
        //objJuego->fondo1();

        colSemillas.colisionSemillas();
        colAgua.colisionAgua();
        colReciclables.colisionReciclables();

    }

    return 0;
}
