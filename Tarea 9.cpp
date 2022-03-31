#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;


int main()
{
    while (true)
    {
        cout<<"Presione una tecla para lanzar los dados: "<<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
            
    }   
}

