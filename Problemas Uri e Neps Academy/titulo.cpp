#include <iostream>
using namespace std;

string title(string F){
	//Seu código aqui
    for(int i = 0; i < F.size(); i++){
        if(i == 0){
            if(F[i] >= 'a' && F[i] <= 'z')
                F[i] -= 32;
        }
        else if(F[i] == ' '){
            if(F[i+1] >= 'a' && F[i+1] <= 'z'){
                F[i+1] -= 32;
            }
        }
        else if(F[i] >= 'A' && F[i] <= 'Z' && F[i-1] != ' ')
            F[i] += 32;   
    }

    return F;

}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << endl;
}
