#pragma once
#include "iostream"
#include "conio.h"
#include "vector"
#include "stdio.h"
#include "sstream"
#include "cstdlib"
#include "ctime"

#define DER 77
#define IZQ 75
#define ARR 72
#define ABA 80

#define COLUMNAS 120
#define FILAS 36
//limites son x12 y10 a x110 y32
#define leftlimitx 12
#define rightlimitx 110
#define uplimity 10
#define downlimity 32

using namespace std;
using namespace System;

void p(short x, short y) {
    Console::SetCursorPosition(x, y);
}
void wS(short width, short height) {
    Console::SetWindowSize(width, height);
    Console::CursorVisible = false;
}
void b_c(short backgroud_color) {
    switch (backgroud_color) {
    case 1: Console::BackgroundColor = ConsoleColor::Black; break;
    case 2: Console::BackgroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::BackgroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::BackgroundColor = ConsoleColor::DarkRed; break;
    case 5: Console::BackgroundColor = ConsoleColor::DarkMagenta; break;
    case 6: Console::BackgroundColor = ConsoleColor::DarkYellow; break;
    case 7: Console::BackgroundColor = ConsoleColor::Gray; break;
    case 8: Console::BackgroundColor = ConsoleColor::DarkGray; break;
    case 9: Console::BackgroundColor = ConsoleColor::Blue; break;
    case 10: Console::BackgroundColor = ConsoleColor::Green; break;
    case 11: Console::BackgroundColor = ConsoleColor::Cyan; break;
    case 12: Console::BackgroundColor = ConsoleColor::Red; break;
    case 13: Console::BackgroundColor = ConsoleColor::Magenta; break;
    case 14: Console::BackgroundColor = ConsoleColor::Yellow; break;
    case 15: Console::BackgroundColor = ConsoleColor::White; break;
    case 16: Console::BackgroundColor = ConsoleColor::DarkCyan; break;
    }
}
void f_c(short foreground_color) {
    switch (foreground_color) {
    case 1: Console::ForegroundColor = ConsoleColor::Black; break;
    case 2: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 5: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 6: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 7: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 8: Console::ForegroundColor = ConsoleColor::DarkGray; break;
    case 9: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 10: Console::ForegroundColor = ConsoleColor::Green; break;
    case 11: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 12: Console::ForegroundColor = ConsoleColor::Red; break;
    case 13: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 14: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 15: Console::ForegroundColor = ConsoleColor::White; break;
    case 16: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    }
}