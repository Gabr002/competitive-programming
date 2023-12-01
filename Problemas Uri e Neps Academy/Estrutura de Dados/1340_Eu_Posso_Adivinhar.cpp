#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

bool test_stack(){
    
}

int main(){

    int num, opc, value;

    queue<int> fila;
    // list<int> lista_teste;
    vector<int> aux;     
    stack<int> pilha;
    priority_queue<int> priority_queue_;   
    

    while(cin >> num){
        if(num == 0)
            break;
        
        for(int i = 0; i < num; i++){    
            cin >> opc >> value;
            
            if(opc == 1){
                fila.push(value);
                pilha.push(value);
                priority_queue_.push(value);
            }else if(opc == 2){
                // lista_teste.push_back(value);
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

        while(!priority_queue_.empty() && !fila.empty() && !pilha.empty() && !lista_teste.empty()){
            fila.pop();
            priority_queue_.pop();
            pilha.pop();
            lista_teste.pop_front();
        }

    }
}


/* bool equal_pilha(list<int>& lista, stack<int>& tad) {
    list<int> aux = lista;
    stack<int> tad_teste = tad;
    while (!aux.empty() && !tad_teste.empty()) {
        if (aux.front() != tad_teste.top()){
            return false;
        }
        aux.pop_front();
        tad_teste.pop();
    }
    return aux.empty() && tad_teste.empty();
}

bool equal_fila(list<int>& lista, queue<int>& tad){
    list<int> aux = lista;
    queue<int> tad_teste = tad;
    while(!aux.empty() && !tad_teste.empty()){
        if(aux.front() != tad_teste.front()){
            return false;
        }
        aux.pop_front();
        tad_teste.pop();
    }
    return aux.empty() && tad_teste.empty();
}

bool equal_fila_prio(list<int>& lista, priority_queue<int>& tad) {
    list<int> aux = lista;
    priority_queue<int> tad_teste = tad;
    while(!aux.empty() && !tad_teste.empty()){
        if(aux.front() != tad_teste.top()){
            return false;
        }
        aux.pop_front();
        tad_teste.pop();
    }
    return aux.empty();
} */