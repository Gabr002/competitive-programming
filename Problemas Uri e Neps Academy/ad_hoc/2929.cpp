#include <bits/stdc++.h>
#include <stdio.h>


using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string opc; 
    int num, value;
    stack<int> stack_;
    cin >> num;

    while(num--){    
        
        cin >> opc;

        if(opc == "PUSH"){
            cin >> value;
            if(stack_.empty()) stack_.push(value);
            else stack_.push(min(stack_.top(),value));
        }else if(opc == "POP"){
            if(!stack_.empty())
                stack_.pop();
            else
                cout << "EMPTY" << endl;
        }else if(opc == "MIN"){
            if(!stack_.empty()){
                cout << stack_.top() << endl;
            }
            else
                cout << "EMPTY" << endl;
        }
    }
}