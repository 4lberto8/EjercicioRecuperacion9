#pragma once
class Jugador{
protected:
    // Posicion del jugador
    int x_P = 57, y_P = 20;
    //int x_P = 60, y_P = 40;
public:
    Jugador() {};
	~Jugador() {};

    // ===================================================== Primera version del jugador
    void dibujar_jugador_v1(int x, int y) {
        b_c(1), f_c(10);
        p(x, y); cout << char(219) << char(223);
        p(x + 4, y); cout << char(223) << char(219);
        p(x + 2, y + 1); cout << char(219) << char(219);
        p(x, y + 2); cout << char(219) << char(220);
        p(x + 4, y + 2); cout << char(220) << char(219);
    }
    void borrar_jugador_v1(int x, int y) {
        b_c(1), f_c(1);
        p(x, y); cout << "  ";
        p(x + 4, y); cout << "  ";
        p(x + 2, y + 1); cout << "  ";
        p(x, y + 2); cout << "  ";
        p(x + 4, y + 2); cout << "  ";
    }
    // =================================================================================
    // ===================================================== Segunda version del jugador
    void dibujar_jugador_v2(int x, int y) {
        p(x + 5, y); b_c(1), f_c(11); cout << "___";
        p(x + 3, y + 1); cout << "('O^O')";
        p(x, y + 2); cout << "'==ooooooo=='"; b_c(1), f_c(15);
    }
    void borrar_jugador_v2(int x, int y) {
        p(x + 5, y); b_c(1), f_c(15); cout << "   ";
        p(x + 3, y + 1); cout << "       ";
        p(x, y + 2); cout << "             ";
    }
    // =================================================================================
    // ===================================================== Tercera version del jugador
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
    // =================================================================================
};