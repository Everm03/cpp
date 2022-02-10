#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 


{
    // datos de entrada 
    double subtotal = 0;
    double total = 0;
    int descuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "La factura esta Exenta S / N: ";
    cin >> estaExenta;

    if (estaExenta == 's'|| estaExenta == 'S')
    {
        calculoImpuesto = 0;
    }
        else 
              if (estaExenta == 'n'|| estaExenta == 'N')
            {
                calculoImpuesto = subtotal * 0.15;

            }

    //Proceso
    total = subtotal + calculoImpuesto;

    //Salida
    cout << endl;
    cout << "Total a pagar:" << total;

    return 0;
}
