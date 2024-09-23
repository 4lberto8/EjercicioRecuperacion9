//SINOPSIS (De acuerdo al enunciado): 
// El jugador tomar� el rol de un "Guardi�n del Medio Ambiente" cuya misi�n es restaurar el equilibrio natural 
// de un ecosistema que ha sido da�ado por la contaminaci�n y la deforestaci�n

#include "Fondo.h"
#include "Controladora.h"
#include "Recurso.h"
#include "Juego.h"
using namespace std;
using namespace System;


int main() {
    wS(120, 36);
    Presentacion* objPresentacion = new Presentacion;
    Recurso* objRecurso = new Recurso;
    Juego* objJuego = new Juego;

    // Instanciar el jugador en una posici�n espec�fica
    Jugador jugador(57, 20); // Usamos el constructor por defecto y luego asignamos la posici�n si es necesario

    // Crear las instancias de colisi�n
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

        cout << "Contador de semillas recolectadas: " << colSemillas.getContadorSemillas() << endl;
        cout << "Contador de agua recolectada: " << colAgua.getContadorAgua() << endl;
        cout << "Contador de reciclables recolectados: " << colReciclables.getContadorReciclables() << endl;

    }

    return 0;
}
