#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);


 void producto(int opcion)
 {
	
	
	system("cls");
	
	int opcionProducto = 0;
	
	
	switch (opcion)
	{
		
	case 1:	
	{
	
	
		cout << " Bebidas Calientes " << endl;
		cout << " ******** "<< endl;
	   	cout << " 1 - Capuccino " << endl;
		cout << " 2 - Expresso " << endl;
		cout << " 3 - Granita " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("1 - Capuccino - L 40.00", 1 , 40);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Expresso - L 30.00", 1 , 30);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - granita - L 40.00", 1 , 40);
                break;
			 default:
		        {
				  cout << " Opcion no valida ";
			     return;
				 break;
		        }
			}  
	
	    cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
	
		break; 
	}		
	case 2:	
	{
		cout << " Bebidas frias " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - Jugo " << endl;
		cout << " 2 - pepsi " << endl;
		cout << " 3 - cocacola " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		{
		     case 1:	
		   	    agregarProducto ("1 - Jugo - L 10.00", 1 , 10);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - pepsi - L 30.00", 1 , 30);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - cocacola - L 25.00", 1 , 25);
                break;
			    default:
		        {
				 cout << " Opcion no valida ";
			     return;
				 break;
		        }
		}  

        
        cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
		
		break;
	}		
    case 3:	
	{
		cout << " Reposteria " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - Pastel de chocolate " << endl;
		cout << " 2 - Pan  " << endl;
		cout << " 3 - pie de manzana " << endl;
		cout << endl;
		
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
	   {
		     case 1:	
		   	    agregarProducto ("1 - Pastel de chocolate - L 150.00", 1 , 150);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Pan - L 20.00", 1 , 20);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - pie de manzana - L 25.00", 1 , 55);
                break;
			    default:
		        {
				  cout << " Opcion no valida ";
			     return;
				 break;
		        }
		}  
		cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
			
		break;
				
	}default:
	    break;	
		
		
	

}	

}
