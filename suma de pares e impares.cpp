#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
	int pares = 0; 
	int impares = 0; 
	int Suma = 0;

    for (int i = 0; i < 11; i++)
    {
        if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10) {
            pares = pares + i;

        }
        cout << i << " ";
        
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9){
        	impares = impares + i;
		}
		
		Suma = pares + impares;

    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares; 
    cout << endl;
    cout << "Total impares: " << impares;
    cout << endl;
    cout << "Total: " << Suma;
	return 0;
}



