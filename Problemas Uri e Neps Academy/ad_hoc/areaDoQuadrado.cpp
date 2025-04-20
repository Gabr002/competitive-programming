#include <iostream>

using namespace std;

class Quadrado{
    public:
        void define(double);
        double area();
    private:
        double lado;
};

void Quadrado::define(double l){
    if(l <= 0){ 
        cout << "Esta função não aceita valor menor que zero!";
    }
    else{ 
        cout << "Continuamos" << endl;
        lado = l;
    }
}

double Quadrado::area(){
    
    return lado*lado;
}
int main(){
    // Criando uma classe que vai criar
    // Quadrados
    double valor;
    Quadrado q;
    cout << "Insira o valor do lado: ";
    cin >> valor;
    q.define(valor);
    cout << endl;
    cout << "Area: " << q.area() << endl;
    
    return 0;
}
