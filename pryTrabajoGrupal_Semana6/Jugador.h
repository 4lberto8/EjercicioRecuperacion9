#pragma once
class Jugador{
protected:
    // Posicion del jugador
    int x_P = 57, y_P = 20;
    int salud_P = 10;
public:
    Jugador() {};
    Jugador(int x, int y) : x_P(x), y_P(y) {};
	~Jugador() {};
    int returnJugadorX() {
        return x_P;
    }
    int returnJugadorY() {
        return y_P;
    }
    int returnSalud() {
        return salud_P;
    }
    void hit_P(int salud_P) {
        if (salud_P>0) {
            salud_P--;
        }
    }
    void dibujar_jugador_v3(int x, int y) {
        p(x + 1, y); b_c(1), f_c(11); cout << "°\\_/°";
        p(x + 1, y + 1);cout << "_(_)_";
        p(x, y + 2);cout << "(_____)";
        p(x + 2, y + 3);cout << "| |";
    }
    void borrar_jugador_v3(int x, int y) {
        p(x + 1, y); b_c(1), f_c(15); cout << "     ";
        p(x + 1, y + 1); cout << "     ";
        p(x, y + 2); cout << "       ";
        p(x + 2, y + 3); cout << "   ";
    }
};