#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "*****************" << endl;
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
        cout << "*************" << endl;
		cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        
        cout << "1 - Granita" << endl;
        cout << "2 - Te Frio" << endl;
        cout << "3 - Pepsi" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Granita - L 30.00", 1, 30);
		} else if(opcionProducto == 2){
			agregarProducto("1 Te Frio - L 25.00", 1, 25);
		} else if(opcionProducto == 3){
			agregarProducto("1 Pepsi - L 18.00", 1, 18);
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
        cout << "**********" << endl;
		cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        
        cout << "1 - Dona" << endl;
        cout << "2 - Tres Leches" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Dona - L 55.00", 1, 55);
		} else if(opcionProducto == 2){
			agregarProducto("1 Tres Leches - L 30.00", 1, 30);
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
