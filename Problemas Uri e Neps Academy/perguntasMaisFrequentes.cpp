#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, k;
    
    
    while((cin >> n >> k) && (n != 0 && k != 0)){
        
        int vetor[1000], count = 0;
        set<int> num;  
        
        for(int i = 0; i < n; i++)
            cin >> vetor[i];
            
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(count == k)
                    break;
                if(vetor[i] == vetor[j])
                    count++;
            }    
            if(count == k)
                num.insert(vetor[i]);
            
            count = 0;
        }
        
        
        cout << num.size() << endl;
    }
}