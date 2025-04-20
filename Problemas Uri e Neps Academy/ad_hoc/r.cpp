#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0, big = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i+1]){ 
            count++;

            if(count > big){ 
                big = count;
            }
            count = 0;
        }else
            count++;
    }

    cout << big << endl;
}