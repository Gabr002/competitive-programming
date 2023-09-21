#include <bits/stdc++.h>
#include <queue>
#include <list>

using namespace std;

int main(){
    int num, opc, value;
    queue<int> fila;
    list<int> lista;
    priority_queue<int> alunosComPrioridade;
    
    while(cin >> num){
        for(int i = 0; i < num; i++){
            cin >> opc >> value;
            if(opc == 1){
                fila.push(value);
            }else if(opc == 2){

            }
        }
    }

    return 0;
}
