#include <iostream>

using namespace  std;

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

    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares; 
	return 0;
}
