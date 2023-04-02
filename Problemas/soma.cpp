#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Decisao(int P, int R){
    if(P == 0)
		std::cout << "C" << std::endl;
    else if(R == 0)
		std::cout << "B" << std::endl;
	else
		std::cout << "A" << std::endl;          
}

int main(){
    int p, r;
    cin >> p >> r;
    Decisao(p, r);
}