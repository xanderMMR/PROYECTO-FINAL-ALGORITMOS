#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include <functional>
#include <algorithm>
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



template <typename T, typename R = T>
class AVLTree {
	struct Node {
		T e;
		Node* l;
		Node* r;
		int h;
		Node(T e) : e(e), l(nullptr), r(nullptr), h(0) {}

		static int  height(Node* n) {
			return n == nullptr ? -1 : n->h;
		}

		void updateH() {
			h = std::max(Node::height(l), Node::height(r)) + 1;
		}
	};
	Node *root;
	int lenght;
	std::function<R(T)>key;

	void destroy(Node* n) {
		if (n != nullptr) {
			detroy(n->l);
			destroy(n->r);
			delete n;
		}
	}

	void rotAB(Node *& n) {
		Node*aux = n->l;
		n->l = aux->r;
		n->updateH();
		aux->r = n;
		n = aux;
		n->updateH();
	}
	void rotBA(Node*&n) {
		Node* aux = n->r;
		n->r = aux->l;
		n->updateH();
		aux->l = n;
		n = aux;
		n->updateH();
	}
	void balance(Node *&n)
	{
		int delta = Node::height(n->l) - Node::height(n->r);
		if (delta < -1) {
			if (Node::height(n->r->l) > Node::height(n->r->r)) {
				rotAB(n->r);
			}
			rotBA(n);
		}
		else if (delta > 1) {
			if (Node::height(n->l->r) > Node::height(n->l->l)) {
				rotBA(n->l);
			}
			rotAB(n);
		}
	}
	void add(Node*& n, T e) {
		if (n = nullptr) {
			n = new Node(e);
			return;
		}
		else if (key(e) < key(n->e)) {
			add(n->l, e);
		}
		else {
			add(n->r, e);
		}
		balance(n);
		n->updateH();
	}
public:
	AVLTree(function<R(T)>key = [](T a) { return a;  }) : root(nullptr), lenght(0), key(key) {}
	~AVLTree() { destroy(root); }

	int Height() {
		return Node::height(root);
	}
	int Size() {
		return lenght();
	}
	void Add(T e) {
		add(root, e);
		++lenght;
	}


};


class Fila
{
	int idx;
	
public:
	Fila() {
	}

	string getData(string name) {
	}
	void agregarDato(string dato) {}

};

class DataFrame
{
	vector<Fila*> arrDato;
	vector<AVLTree<float> *> treeFloat;
	vector<AVLTree<string> *> treeString;
	vector<string> nombreColumna;
	int cantidadDatos = 0;
	int cantidadColumnas = 0;

public:
	DataFrame* select(vector<string>colNames) {
		/*	colmap* nCols = new colmap();
		for (auto cn : colNames) {
		nCols[cn] = cols[cn];
		}
		DataFrame * nDF(nCols);
		nDF->fil = this->fil;*/
	}
	~DataFrame() {};
	void aparecerMenu(int &x) {
		system("pause>NULL");
		menuPrincipal(x);
	}
	int tamañoCol(string str) {
		ifstream archivo(str);
		vector < AVLTree<string>*> df;
		int cont = 0;
		while (getline(archivo, str)) {
			stringstream ss(str);
			while (getline(ss, str, ',')) {
				df.push_back(new AVLTree<string>());
				cont++;
			}break;
		}
		return cont;
	}

	/*void nombreColumnas( string str) {
	ifstream archivo;
	string * r = new string[tamañoCol(str)];
	vector<string>nombreCol;
	cout << endl;
	for (int i = 0; i < tamañoCol(str); i++) {
	r[i] = "Columna";
	}


	stringstream ss(str);
	while (getline(ss, str, ',')) {
	for (int i = 0; i < tamañoCol(str); i++) {
	cout << r[i]<<"\t";
	}

	}
	}
	*/
	void cargarDataFrame(string &str, int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << "Nombre archivo: "; cin >> str;
		ifstream archivo;
		tamañoCol(str);
		cout << tamañoCol(str);


		//agrega elementos a cada arbol

		ifstream file;
		file.open(str);
		char separador;
		cout << "Ingrese el separador: ";
		cin >> separador;

		//Variables
		string linea;
		string dato;

		int cont{ 0 };
		int j{ 0 };
		int k{ 0 };
		while (getline(file, linea))
		{
			stringstream ss(linea);
			arrDato.push_back(new Fila());
			for (int i{ 0 }; i < tamañoCol(linea); ++i)
			{
				getline(ss, dato, separador);
				arrDato.at(cont)->agregarDato(dato);

				if (isdigit(dato[0]))
				{
					float num = stof(dato);
					treeFloat[j]->Add(num);
					++j;
				}
				else
				{
					treeString[k]->Add(dato);
					++k;
				}
				//tree.at[cont].insertarData(arrDato[cont], dato);
			}
			j = 0;
			k = 0;
			++cantidadDatos;
			++cont;
		}
		system("pause>NULL");
		menuPrincipal(x);
	}
	void imprimirDatos(int &x, string &str) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		vector<string>nam;
		ifstream archivo;
		cout << endl;

		archivo.open(str);
		while (!archivo.eof()) {
			getline(archivo, str, ',');
			cout << str << "\t";

		}		archivo.close();
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

	void guardarDatos(vector<DataFrame*>&dfs, int &x) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		int i;
		string name;
		do {
			cout << "Seleccionar un DF [del 1 al " << dfs.size() << "]";
			cin >> i; --i;
		} while (i < 0 || i >= dfs.size());
		cout << "Nombre del archivo: ";
		cin.get();
		getline(cin, name);
		aparecerMenu(x);
	}

	void indexar(int &x) {
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
		cout << "1. Ordenar" << endl;;
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
	DataFrame* seleccionar(vector<string>arbol) {
		AVLTree<string>* ncol = new AVLTree<string>();

}
	void ordenar(int &x) {
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}
	void filtrar(int &x) {
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}
	void seleccionar(int &x) {
		cout << "Datos ordenados " << endl;
		system("pause>NULL");
		menuPrincipal(x);
	}




};



