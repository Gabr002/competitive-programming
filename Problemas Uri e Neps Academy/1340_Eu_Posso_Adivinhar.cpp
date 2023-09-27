#include <bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;

bool equal_pilha(list<int>& lista, stack<int>& tad) {
    cout << "Pilha" << endl;
    while (!lista.empty() && !tad.empty()) {
        if (lista.back() != tad.top()) {
            return false;
        }
        lista.pop_back();
        tad.pop();
    }
    return lista.empty() && tad.empty();
}

bool equal_fila(list<int>& lista, queue<int>& tad){
    cout << "Fila" << endl;
    while(!lista.empty() && !tad.empty()){
        if(lista.front() != tad.front()){
            return false;
        }
        lista.pop_front();
        tad.pop();
    }
    return lista.empty() && tad.empty();
}

bool equal_fila_prio(list<int>& lista, priority_queue<int>& tad) {
    cout << "FP" << endl;
    while (!lista.empty() && !tad.empty()) {
        if(lista.front() != tad.top()) {
            return false;
        }
        lista.pop_front();
        tad.pop();
    }
    return lista.empty();
}

int main(){

    int num, opc, value;

    queue<int> fila;
    list<int> lista_teste;
    stack<int> pilha;
    priority_queue<int> priority_queue_;   
    

    while(cin >> num){
        
        for(int i = 0; i < num; i++){    
            cin >> opc >> value;
            
            if(opc == 1){
                fila.push(value);
                pilha.push(value);
                priority_queue_.push(value);
            }else if(opc == 2){
                lista_teste.push_back(value);
            }   

        }

        if(
        (equal_pilha(lista_teste, pilha) && 
        equal_fila_prio(lista_teste, priority_queue_) && 
        equal_fila(lista_teste, fila)) || 

        (equal_pilha(lista_teste, pilha) && 
        equal_fila_prio(lista_teste, priority_queue_)) ||

        (equal_pilha(lista_teste, pilha) && 
        equal_fila(lista_teste, fila)) ||

        (equal_fila(lista_teste, fila) &&
        equal_fila_prio(lista_teste, priority_queue_))
        )
            cout << "not sure" << endl;
        else if(equal_fila(lista_teste, fila))
            cout << "queue" << endl;
        else if(equal_pilha(lista_teste, pilha))
            cout << "stack" << endl;
        else if(equal_fila_prio(lista_teste, priority_queue_))
            cout << "priority queue" << endl;
        else
            cout << "impossible" << endl;

        while(!priority_queue_.empty() && !fila.empty() && !pilha.empty()){
            fila.pop();
            priority_queue_.pop();
            pilha.pop();
        }

    }
} 
