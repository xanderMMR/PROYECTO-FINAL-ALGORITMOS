#include "Header.h"


int main() {
	DataFrame *dt;
	int x;
	menuPrincipal(x);


	while (x != 0) {
		switch (x) {
		case 1:
			dt->importarDatos(x);
			break;
		

		case 2:
			dt->imprimirDatos(x);

				; break;
		case 3:
			dt->listarDataFrame(x);
			break;

		case 4:
			dt->guardarDatos(x);
			break;
		case 5: dt->indexar(x);
			break;
		case 6: 
			dt->nuevoDataFrame(x);
			break;
		case 0: break;
		}
	}
	system("pause");

	return  0;
}