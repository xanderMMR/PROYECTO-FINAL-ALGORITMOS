#pragma once
#include <iostream>
#include <string.h>
#include <string>
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
	cout << "1. Cargar Archivo" << endl;
	Console::SetCursorPosition(35, 16);
	cout << "2. Imprimir" << endl;
	Console::SetCursorPosition(35, 17);
	cout << "3. Listar DataFrames" << endl;
	Console::SetCursorPosition(35, 18);
	cout << "4. Guardar DataFrames" << endl;
	Console::SetCursorPosition(35, 19);
	cout << "5. Indexar" << endl;
	Console::SetCursorPosition(35, 20);
	cout << "6. Crear Nuevo DataFrame" << endl;
	Console::SetCursorPosition(35, 21);
	cout << "0. Salir" << endl;

	Console::ForegroundColor = ConsoleColor::Green;
	Console::SetCursorPosition(35, 23);
	cout << "Elija opcion: "; cin >> x;

	system("cls");

}

class Columna
{
	int valor;
	string atributo;
	
public:
	Columna() {};
	~Columna() {};


};


class Fila
{
private:
	int id;
public:
	Fila() {};
	~Fila() {};


};

class DataFrame
{
		
	Fila*fila;
	Columna*columna;

public:
	DataFrame() {};
	~DataFrame() {};
	void importarDatos(int &x){
		Console::ForegroundColor = ConsoleColor::Yellow;
		string str;
		cout << "Importe sus datos (Nombre del archivo): ";
		cin >> str;
		cout << "Archivo importado exitosamente"<<endl;
		system("pause>NULL");
		menuPrincipal(x);
		
	}
	void imprimirDatos(int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << "Imprimiendo Datos: " << endl;
		system("pause>NULL");
		menuPrincipal(x);
}
	void listarDataFrame(int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << "DataFrame 1: " << endl;
		Console::SetCursorPosition(0, 15);
		cout << "DataFrame 2: " << endl;
		system("pause>NULL");
		menuPrincipal(x);
		}

	void guardarDatos(int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		int y;
		cout << "Indique el # DataFrame: "; cin >> y;
		cout << endl;
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << "DataFrame Guardado Exitosamente" << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}

	void indexar(int &x){
		Console::ForegroundColor = ConsoleColor::Yellow;
		int y;
		int w;
		cout << "Cual # de DataFrame: ";
		cin >> y;
		cout << endl << "Por cual columna: ";
		cin >> w;
		cout << "Indexado exitoso" << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}
	void nuevoDataFrame(int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		int y;
		cout << "1. Desde cero" << endl;
		cout << "2. Desde otro DF" << endl;
		Console::ForegroundColor = ConsoleColor::Green;
		cout << endl;
		cout << "Elegir opcion: "; cin >> y;
		switch (y) {
		case 1: 
		{string f;
		cout << "Nombre del archivo: "; cin >> f;
		system("pause>NULL");
		menuPrincipal(x); }
			break;
		case 2: {
			operaciones(x);
			system("pause>NULL");
			menuPrincipal(x);

		}
			break;
		}


	}
	void operaciones(int &x) {
		cout << "1. Ordenar" << endl;
		cout << "2. Filtrar" << endl;
		cout << "3. Seleccionar" << endl;
		int y;
		cout << endl << "Elegir opciones: "; cin >> y;
		switch (y) {
		case 1: ordenar(x); break;
		case 2: filtrar(x); break;
		case 3: seleccionar(x); break;
		}
	
	
	}
	void ordenar(int &x){
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}
	void filtrar(int &x) {
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}
	void seleccionar(int &x){
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}




};



