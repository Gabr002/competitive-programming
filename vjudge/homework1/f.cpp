#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    string str, word; cin >> str;
    bool formou = false;
    int count = 0;

    if(str.size() < 3){ 
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i <= str.size(); i++){
        if(formou){
            if(word == "Danil") count++;
            if(word == "Olya") count++;
            if(word == "Slava") count++; 
            if(word == "Ann") count++; 
            if(word == "Nikita") count++;
            formou = false;
            word.clear();
            if(str[i] == '_' || str[i+1] >= 'A' && str[i+1] <= 'Z') continue;
            else{
                word.push_back(str[i]);
                continue;
            }
        }
        
        bool eh = (str[i+1] >= 'A' && str[i+1] <= 'Z');
        if(str[i+1] == '_' || eh || i+1 == str.size()){
            formou = true;
            word.push_back(str[i]);
        }
        else{ 
            word.push_back(str[i]); 
            if(word == "Danil"){ 
                count++;
                word.clear();
            }if(word == "Olya"){ 
                count++;
                word.clear();
            }if(word == "Slava"){ 
                count++;
                word.clear();
            }if(word == "Ann"){ 
                count++;
                word.clear();
            }if(word == "Nikita"){ 
                count++;
                word.clear();
            }
        }
    }
    
    if(count == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
