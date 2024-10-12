#include <iostream>
using namespace std;

int main(){
    //para este ejemplo, vamos a suponer que no hay comida
    bool comida = false;

    //si hay comida, como
    if(comida){
        cout << "Si hay comida :)" << endl;
        cout << "Voy a comer porque tengo hambre" << endl;
    }else{ //si no hay comida, me cocino
        cout << "No hay comida :(" << endl;
        cout << "Voy a cocinarme para luego poder comer" << endl;
    }

    return 0;
}