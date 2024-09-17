#pragma once
class Jugador{
protected:
    int x_P = 37, y_P = 31;

public:
    Jugador() {};
	~Jugador() {};
    void borrar_jugador(int x, int y)
    {
        b_c(1), f_c(1);

        p(x, y); cout << "       ";
        p(x, y + 1); cout << "       ";
        p(x, y + 2); cout << "       ";
        p(x, y + 3); cout << "       ";
        /*
        p(x, y); cout << "  ";
        p(x + 4, y); cout << "  ";
        p(x + 2, y + 1); cout << "  ";
        p(x, y + 2); cout << "  ";
        p(x + 4, y + 2); cout << "  ";*/
    }
    void dibuja_jugador(int x, int y)
    {
        b_c(1), f_c(10);
        p(x, y); cout << "0\\_ /";
        p(x, y + 1); cout << " _(_)_ ";
        p(x, y + 2); cout << "(_____)";
        p(x, y + 3); cout << "  | |  ";
        //p(x, y); cout << char(219) << char(223);
        //p(x + 4, y); cout << char(223) << char(219);
        //p(x + 2, y + 1); cout << char(219) << char(219);
        //p(x, y + 2); cout << char(219) << char(220);
        //p(x + 4, y + 2); cout << char(220) << char(219);
    }
};