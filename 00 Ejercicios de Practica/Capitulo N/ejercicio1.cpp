// Crea una función template que compare dos valores ingresador por consola de cualquier tipo y devuelva el mayor.
#include <iostream>
using namespace std;

template <class T1, class T2>
void comparar(T1 numA, T2 numB){
    if(numA > numB){
        cout << numA << " es el mayor de ambos" << endl;
    }else{
        cout << numB << " es el mayor de ambos" << endl;
    }
}

int main(){
    int numA;
    float numB;
    cout << "Ingrese primer número: "; cin >>numA;
    cout << "Ingrese segundo número: "; cin >> numB;
    comparar(numA,numB);
    return 0;
}