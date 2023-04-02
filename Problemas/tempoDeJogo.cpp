#include <iostream>
using namespace std;

int main(){
    int hora, ponto=1, tot = 0;
    int num1, num2;
    
    cin >> num1 >> num2;
    
    hora = num1;
    while(ponto != num2){
        hora++;
        ponto = hora;
        tot++;
        if(hora == 24){
            hora = 0;
            ponto = hora;
        }
    }
    cout << "O JOGO DUROU "<< tot <<" HORA(S)" << endl;
    return 0;
}