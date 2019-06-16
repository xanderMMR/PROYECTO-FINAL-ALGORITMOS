#include <iostream>
using namespace std;
using namespace System;

void menuPrincipal(int &x) {
	system("cls");
	Console::ForegroundColor = ConsoleColor::White;
	cout << "$$$$$$$$\\              $$\\                                 $$$$$$$$\\$$\\                  $$\\               " << endl;
	cout << "\\__$$  __|             $$ |                                $$  _____\\__|                 $$ |                  " << endl;
	cout << "   $$ |$$$$$$\\ $$$$$$\\ $$$$$$$\\  $$$$$$\\ $$\\ $$$$$$\\       $$ |     $$\\$$$$$$$\\  $$$$$$\\ $$ |              " << endl;
	cout << "   $$ $$  __$$\\\\____$$\\$$  __$$\\ \\____$$\\\\__$$  __$$\\      $$$$$\\   $$ $$  __$$\\ \\____$$\\$$ |      " << endl;
	cout << "   $$ $$ |  \\__$$$$$$$ $$ |  $$ |$$$$$$$ $$\\$$ /  $$ |     $$  __|  $$ $$ |  $$ |$$$$$$$ $$ |                " << endl;
	cout << "   $$ $$ |    $$  __$$ $$ |  $$ $$  __$$ $$ $$ |  $$ |     $$ |     $$ $$ |  $$ $$  __$$ $$ |			" << endl;
	cout << "   $$ $$ |    \\$$$$$$$ $$$$$$$  \\$$$$$$$ $$ \\$$$$$$  |     $$ |     $$ $$ |  $$ \\$$$$$$$ $$ |                  " << endl;
	cout << "   \\__\\__|     \\_______\\_______/ \\_______$$ |\\______/      \\__|     \\__\\__|  \\__|\\_______\\__|      " << endl;
	cout << "	                           $$\\   $$ |" << endl;
	cout << "	                           \\$$$$$$  |" << endl;
	cout << "	                            \\______/" << endl;


	Console::ForegroundColor = ConsoleColor::Red;

	Console::SetCursorPosition(35, 15);
	cout << "1. Crear DataFrame" << endl;
	Console::SetCursorPosition(35, 16);
	cout << "2. Guardar DataFrame" << endl;
	Console::SetCursorPosition(35, 17);
	cout << "0. Salir" << endl;

	Console::ForegroundColor = ConsoleColor::Green;
	Console::SetCursorPosition(35, 19);
	cout << "Elija opcion: "; cin >> x;

	system("cls");

}

int main() {
	int x;
	menuPrincipal(x);


	while (x != 0) {
		switch (x) {
		case 1:

			cout << "DataFrame creado exitosamente" << endl;
			system("pause>NULL");
			menuPrincipal(x); break;

		case 2:

			menuPrincipal(x)

				; break;
		}
	}
	system("pause");

	return  0;
}