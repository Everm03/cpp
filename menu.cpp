#include <iostream>

using namespace std;
 
int main (int argc, char const * argv[])
{
    int opcion = 0;

    while (true)
        cout << "****" << endl;
        cout << "MENU" << endl;
        cout << "****" << endl;

        cout << endl;
        cout << "1 - CAFE Y GRANITAS" << endl;
        cout << "2 - REPOSTERIA" << endl;
        cout << "0 - SALIR" << endl;

        cout << "Ingrese una opcion del menu:";
        cin >> opcion ;

        if (opcion ==1)
        {
            system("cls]");
            cout <<" Estas en el menu CAFE Y GRANITAS" << endl;
            system("pause");
            
        }

         if (opcion ==2)
        {
            system("cls");
            cout <<" Estas en el menu REPOSTERIA" << endl;
            system("pause");
            
        }

         if (opcion ==0)
        {
            break;  
        }
          

        cout << endl; 
        cout << "Salistes del sistema";
         return 0;
    
	}
