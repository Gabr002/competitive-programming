#include <bits/stdc++.h>
using namespace std;

int main(){
	int X, Div = 1;
	
	cin >> X;
    // Seu código vai aqui
	while(Div <= X){
		if(X%Div==0){
			if(Div == X)
				cout << Div;
			else
				cout << Div << " ";
		}
		Div++;
	}
	cout << endl;
    return 0;
}