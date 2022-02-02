/*Crear un programa que sume, reste, multiplique y divida. */

#include <iostream>


using namespace std;

 int main(){
   
   int A,B, suma = 0, resta = 0, multiplicacion = 0, division = 0;
 
    cout<<"Ingrese el valor de A:"; cin>>A;
    cout<<"Ingrese el valor de B:"; cin>>B;
    
    suma = A + B;
    resta = A - B;
    multiplicacion = A * B;
    division = A / B;
    
    cout<<"La suma es:"<<suma<<endl;
    cout<<"La resta es:"<<resta<<endl;
    cout<<"La multiplicacion es:"<<multiplicacion<<endl;
    cout<<"La division es:"<<division<<endl;
    




   return 0;
   
   
}
