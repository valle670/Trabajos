#include <iostream>
#include <windows.h>

using namespace std;
int a, suma, TG1= 1, CB1=1, OC1=1, hora, asiento, asiento1=1, asiento2=2 ;
char M;
long long ID;
int main()
{
    do{
        	cout << "--------------------------TRANSPORTE VALLE--------------------------------" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "-                   1 SPS--TEGUCIGALPA                                           -" << endl;
		cout << "-                     TERMINAL DE SALIDA: OMNIBUS                                -" << endl;
		cout << "-                     TERMINAL DE LLEGADA:TICA BUS HONDURAS                      -" << endl;
		cout << "-                     HORA DE SALIDA: 5:00 AM / 8:00 AM                          -" << endl;
		cout << "-                     ASIENTOS EJEC.: PASILLO/VENTANA                            -" << endl;
		cout << "-                     PRECIO 310  LPS                                            -" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;

		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "-                   2 SPS--CEIBA                                                 -" << endl;
		cout << "-                     TERMINAL DE SALIDA: OMNIBUS                                -" << endl;
		cout << "-                     TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL                   -" << endl;
		cout << "-                     HORA DE SALIDAD: 6:00 AM/ 1:00 PM                          -" << endl;
		cout << "-                     ASIENTOS EJEC.: PASILLO/VENTANA                            -" << endl;
		cout << "-                     PRECIO 480  LPS                                            -" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "-                   3 SPS-- OLANCHO                                              -" << endl;
		cout << "-                     TERMINAL DE SALIDA: OMNIBUS                                -" << endl;
		cout << "-                     TERMINAL DE LLEGADA: TERMINAL DISCOVERY                    -" << endl;
		cout << "-                     HORA DE SALIDA: 7:30 AM / 11:00 AM                         -" << endl;
		cout << "-                     ASIENTOS EJEC.: PASILLO/VENTANA                            -" << endl;
		cout << "-                     PRECIO 540 LPS                                             -" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		
	        
	    cout << "A donde desea viajar?: "<<endl; 
		cin >> a;
		
		 if (a==1){
            cout<<"ingrese su identidad"<<endl;
            cin>>ID;
            cout<<"en que horario? 1(5:00 AM)/ 2(8:00 AM)"<<endl;
            cin>>hora;
            cout<<"que asiento 2,3 (PASILLO)/ 1,4 (VENTANA)"<<endl;
            cin>>asiento;
       
       if(hora==1){
           switch(asiento){
               case 1:
               cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:5:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
                
            case 2:
              cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:5:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
                
                
            case 3:
               cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:5:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
        
            
            case 4: 
                cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:5:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
           }
       
           
       }
       
       if(hora==2){
           switch(asiento){
           	case 1: 
             cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:8:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
                
            case 2:
                cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:8:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "---------------------------------" <<endl;
                break;
                
                
            case 3:
                cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:8:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "------------------------------" <<endl;
                break;
        
            
            case 4: 
                cout<<"---------SPS--TEGUCIGALPA--------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:TICA BUS HONDURAS   -" << endl;
                cout<<"         Horario:8:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 310  LP-"  <<endl;
				cout << "-----------------" <<endl;
                break;
           }
       }
       
    }  
    
    if(a==2){
        cout<< "Ingrese si identidad"<<endl;
        cin>> ID;
        cout<< "En que horario? 1(6:00 AM)/ 2(1:00 PM) "<< endl;
        cin>> hora;
        cout<<"Escoja su asiento 2,3 (PASILLO) / 1,4 (VENTATA)"<< endl;
        cin>> asiento;
        
        if(hora==1){
            switch(asiento){
                case 1:
               cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:6:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 2:
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:6:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 3:
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:6:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 4: 
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:6:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            }
        }
        
        if(hora==2){
            switch(asiento){
                case 1:
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:1:00 PM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 2:
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:1:00 PM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 3:
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:1:00 PM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            
            case 4: 
                cout<<"----------SPS--CEIBA-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA:CEIBA FERRY TERMINAL   -" << endl;
                cout<<"         Horario:1:00 PM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 480  LP-"  <<endl;
				cout << "----------------------------" <<endl;
                break;
            }
        }
    }
    
    if (a==3){
        cout<< "Ingrese su identidad"<<endl;
        cin>>ID;
        cout<< "En que horario? 1 (7:30 AM) / 2 (11:00 AM)"<<endl;
        cin>>hora;
        cout<<"Escoja su asiento 2,3 (PASILLO) / 1,4 (VENTANA)"<<endl;
        cin>> asiento;
        
        if (hora==1){
            switch(asiento){
                case 1:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:7:30 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 2:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:7:30 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 3:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:7:30 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 4: 
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:7:30 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            }
        }
        
        if (hora==2){
            switch(asiento){
                case 1:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:11:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 2:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:11:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 3:
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:11:00 AM"     <<endl;
                cout<<"         ASIENTO: PASILLO"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            
            case 4: 
                cout<<"----------SPS--OLANCHO-----------"<<endl;
                cout<<"         IDENTIDAD: "<< ID <<endl;
                cout << "-      TERMINAL DE SALIDA: OMNIBUS             -" << endl;
		        cout << "-      TERMINAL DE LLEGADA: TERMINAL DISCOVERY   -" << endl;
                cout<<"         Horario:11:00 AM"     <<endl;
                cout<<"         ASIENTO: VENTANA"    <<endl;
                cout << "-      PRECIO 540  LP-"  <<endl;
				cout << "-------------------------------" <<endl;
                break;
            }
        }
    }
        
    cout<<"\nDesea comprar otro boleto mas? (y/n): ";cin>>M;
	system("pause");
	system("cls");
    }while(M=='y');	
	cout<<"GRACIAS POR SU COMPRA"<<endl;

    return 0;
}

