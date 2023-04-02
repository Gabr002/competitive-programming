// Gangorra
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Lendo a entrada do exercício
    int P1, C1, P2, C2, p1, p2;
    cin >> P1 >> C1 >> P2 >> C2;

    // Seu código vai aqui
	p1 = P1*C1;
	p2 = P2*C2;
	
	if(p1 != p2){
		if(p1 > p2)
			cout << -1 << endl;
		else
			cout << 1 << endl;
	}else
		cout << 0 << endl;
    return 0;
}

