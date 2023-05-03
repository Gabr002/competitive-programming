#include <iostream> /* cout e cin */
using namespace std;

int main(){
    int P, R;

    cin >> P >> R;

    if(P){ // Left
        if(R)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }else // Right
        cout << "C" << endl;
}