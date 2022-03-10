#include <iostream>

using namespace std;

double impuesto;
double subTotal;
double totalapagar;

string listaProductos;



void agregarProducto (string descripcion, int cantidad, double precio)
{
	
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio );
	impuesto = impuesto + (precio * 0.20);
	totalapagar = subTotal + impuesto;	
	
}


void imprimirFactura()
{
	
	system("cls");
	cout << " ************ " << endl;
	cout << " Factura " << endl;
	cout << " ************ " << endl;
	cout << endl;
	
	cout << " Productos " << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << " Total a pagar : " <<  totalapagar << endl;
	system("pause");
	
}
