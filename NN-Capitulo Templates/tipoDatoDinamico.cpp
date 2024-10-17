//Sacar el valor absoluto de un número sin conocer el tipo de dato que vamos a usar.
#include <iostream>
using namespace std;

template <class datoGenerico>
void mostrarABS(datoGenerico numero);

int main(){
    int numA = 19;
    float numB = -19.6;
    double numC = 19.0603;
    mostrarABS(numA);
    mostrarABS(numB);
    mostrarABS(numC);
    return 0;
}

template <class datoGenerico>
void mostrarABS(datoGenerico numero){
    if (numero<0){
        numero *= -1;
    }
    cout << "el valor absoluto del número es: " << numero << endl;
}