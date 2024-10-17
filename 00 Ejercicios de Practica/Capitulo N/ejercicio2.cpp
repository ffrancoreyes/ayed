//Escribe una función template que acepte dos valores de cualquier tipo y devuelva su suma.
#include <iostream>
using namespace std;

template <class T1, class T2>
T1 suma(T1 numA, T2 numB){
    T2 suma = 0;
    suma = numA + numB;
    cout << "La suma entre " << numA << " y " << numB << " es: " << suma << endl;
    return suma;
}


int main(){
    int numA;
    float numB;
    cout << "Ingrese primer número: "; cin >>numA;
    cout << "Ingrese segundo número: "; cin >> numB;
    suma(numA,numB);
    return 0;
}