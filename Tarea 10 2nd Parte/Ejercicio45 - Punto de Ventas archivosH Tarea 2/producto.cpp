#include <iostream>
#include "factura.h"
#include "productos.h"

using namespace std;

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Mochaccino" << endl;
        cout << "2 - Limonada Granizada" << endl;
        cout << "3 - Coca Cola" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Mochaccino - L 65.00", 1, 65);
		} else if(opcionProducto == 2){
			agregarProducto("1 Limonada Granizada - L 55.00", 1, 55);
		} else if(opcionProducto == 3){
			agregarProducto("1 Coca Cola - L 20.00", 1, 20);
		} else {
			cout << "opcion no valida" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Relampago" << endl;
        cout << "2 - Chocolate Dona" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Relampago - L 20.00", 1, 20);
		} else if(opcionProducto == 2){
			agregarProducto("1 Chocolate Dona - L 25.00", 1, 25);
		} else {
			cout << "opcion no valida" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }        
    default:
        break;
    }
}
