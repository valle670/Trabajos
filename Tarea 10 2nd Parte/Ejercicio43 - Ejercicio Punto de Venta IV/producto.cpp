#include <iostream>

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
        system("pause");
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        system("pause");
        break;
    }        
    default:
        break;
    }
}
