#include <iostream>
using namespace std;

int main(){
    //para este ejemplo, vamos a suponer que no hay comida pero que si me alcanza para comprarme
    bool comida = false;
    bool tengoParaCocinar = false;
    float dinero = 40.5;

    /*
    Me pregunto si hay comida, en caso de que haya comida voy a comer. Si no hay comida pero si tengo para preparar, me preparo comida. Ahora, si no tengo para preparar me pregunto si tengo dinero, necesito mínimo 39 dolares para poder comprarme algo de comer, si tengo mas que 39 dólares, voy al super. Caso contrario, no me preparo nada de comer.
    */
    if(comida){
        cout << "Si hay comida :)" << endl;
        cout << "Voy a comer porque tengo hambre" << endl;
    }else if(tengoParaCocinar){ 
        cout << "No hay comida :(" << endl;
        cout << "Voy a cocinarme para luego poder comer" << endl;
    }else{
        if(dinero > 39){
            cout << "Voy al super a comprarme de comer" << endl;
        }else{
            cout << "Hoy no voy a poder comer :c" << endl;
        }
    }
    
    return 0;
}
