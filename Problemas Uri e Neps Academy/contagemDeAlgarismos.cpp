#include <bits/stdc++.h>
using namespace std;

int main(){
    int totNum, vetor[10];
    string number = "0123456789", num;

    for(int i = 0; i < 10; i++)
        vetor[i] = 0;

    cin >> totNum;

    while(totNum--){
        cin >> num;

        for(int i = 0; i < num.size(); i++){
            for(int j = 0; j < number.size(); j++){
                if(num[i] == number[j]){
                    vetor[j]++;
                }
            }
        }
    }   

    for(int i = 0; i < 10; i++)
        cout << i << " - " << vetor[i] << endl;

}