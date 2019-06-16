#pragma once
#include <iostream>
#include <string.h>
using namespace std;
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
	void importarDatos(){}
	void indexar(){}
	void exportar() {}

	void ordenar(){}
	void filtrar() {}
	void seleccionar(){}




};



