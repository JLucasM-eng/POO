#include <iostream>
#include <string>

using namespace std;

class Carro {
    string placa;
    int velocidade;

public:
    void acelerar(){
        velocidade+=10;
    }
    void frear(){
        velocidade-=10;
    }
    void set(string mplaca, int mvelo){
        placa = mplaca;
        velocidade = mvelo;
    }
    void mostrarVelocidade(){
        cout << velocidade << "Km/h \n";
    }

};

int main(){

    Carro ford;
    ford.set("GGG-2222",10);
    ford.acelerar();
    ford.mostrarVelocidade();
    ford.acelerar();
    ford.mostrarVelocidade();
    ford.frear();
    ford.mostrarVelocidade();
    return 0;

}