#include "Header.h"


int main() {
	vector<DataFrame*>dfs;
	DataFrame *dt;
	string str;

	int x;
	menuPrincipal(x);


	do {
		switch (x) {

		case 1:
			dt->cargarDataFrame(str, x); break;

		case 2:
			dt->imprimirDatos(x, str); break;
		case 3:
			dt->listarDataFrame(x);	break;

		case 4:
			dt->guardarDatos(dfs, x);
			break;
		case 5: dt->indexar(x);
			break;
		case 6: dt->nuevoDataFrame(x);
			break;
		case 0: break;
		}
	} while (x != 0);
	system("pause");

	return  0;
}