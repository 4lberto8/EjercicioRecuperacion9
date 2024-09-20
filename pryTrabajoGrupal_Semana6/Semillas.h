#pragma once
class Semillas
{
protected:
	int SmiX;
	int SmiY;
public:
	Semillas(int x, int y) {
		SmiX = x;
		SmiY = y;
	}
	void setSmiX(int x) {
		SmiX = x;
	}
	void setSmiY(int y) {
		SmiY = y;
	}
	void dibujar_semilla() {
		Console::SetCursorPosition(SmiX, SmiY);
		Console::ForegroundColor = ConsoleColor::DarkYellow;
		cout << " _ ";
		Console::SetCursorPosition(SmiX, SmiY + 1);
		cout << "/ \\";
		Console::SetCursorPosition(SmiX, SmiY + 2);
		cout << "\\_/";
	}
	void borrar_semilla() {
		Console::SetCursorPosition(SmiX, SmiY);
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "   ";
		Console::SetCursorPosition(SmiX, SmiY + 1);
		cout << "    ";
		Console::SetCursorPosition(SmiX, SmiY + 2);
		cout << "    ";
	}
	int getSmiX() {
		return SmiX;
	}
	int getSmiY() {
		return SmiY;
	}
	~Semillas() {};
};