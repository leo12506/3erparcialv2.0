#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h> 

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Aqua = 3,
    Red = 4,
    Purple = 5,
    Yellow = 6,
    White = 7,
    Gray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightAqua = 11,
    LightRed = 12,
    LightPurple = 13,
    LightYellow = 14,
    BrightWhite = 15
};

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    while (true) {
        int opcion = 1;
        double area;
        bool selected = false;

        while (!selected) {
            system("cls");

            setColor(LightYellow);
            cout << "Seleccione una figura para calcular el area:" << endl;
            setColor(White);
            cout << (opcion == 1 ? "> " : "  ") << "1. Circulo" << endl;
            cout << (opcion == 2 ? "> " : "  ") << "2. Rectangulo" << endl;
            cout << (opcion == 3 ? "> " : "  ") << "3. Triangulo" << endl;
            cout << (opcion == 4 ? "> " : "  ") << "4. Cuadrado" << endl;
            setColor(LightRed);
            cout << (opcion == 5 ? "> " : "  ") << "5. Salir" << endl;

            int key = _getch();

            if (key == 224) {
                key = _getch();
                if (key == 72) {
                    if (opcion > 1) {
                        opcion--;
                    }
                }
                else if (key == 80) {
                    if (opcion < 5) {
                        opcion++;
                    }
                }
            }
            else if (key == 13) {
                selected = true;
            }
        }

        system("cls");

        switch (opcion) {
        case 1: {
            double radio;
            setColor(LightYellow);
            cout << "Ingrese el radio del circulo: ";
            setColor(White);
            cin >> radio;
            area = M_PI * radio * radio;
            setColor(LightGreen);
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double base, altura;
            setColor(LightYellow);
            cout << "Ingrese la base del rectangulo: ";
            setColor(White);
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            setColor(LightBlue);
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        case 3: {
            double base, altura;
            setColor(LightYellow);
            cout << "Ingrese la base del triangulo: ";
            setColor(White);
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            setColor(LightAqua);
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        case 4: {
            double lado;
            setColor(LightYellow);
            cout << "Ingrese el lado del cuadrado: ";
            setColor(White);
            cin >> lado;
            area = lado * lado;
            setColor(LightPurple);
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        case 5:
            setColor(White); 
            cout << "Saliendo del programa." << endl;
            return 0;
        default:
            setColor(LightRed);
            cout << "Opcion invalida. Por favor, seleccione una opcion entre 1 y 5." << endl;
            break;
        }

        setColor(White); 
        cout << "Presione cualquier tecla para volver al menu..." << endl;
        _getch();
    }

    return 0;
}
