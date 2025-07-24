#include <bits/stdc++.h>
using namespace std;
#define tam 10000

int main(){
    /* - 3 -> total de consultas
       - 2 1 ->  Coordenada do ponto divisor (2 -> Ponto Leste, 1 -> Ponto Norte)

    Três Consultas:
    10 10 -> (x-> 10, ponto Leste, Y -> 10, Ponto Norte) ->  Printa (NE), Nordeste
    -10 1 ->  (X-> -10, Ponto Oeste, Y -> 1, Ponto Divisor) -> Divisa
    0 33 -> (X-> 0, Ponto Oeste, Y -> 1, Ponto Norte) -> Printa (NO), Noroeste


         4 -> total de consultas
        -1000 -1000 -> Coordenada do ponto divisor (-1000 -> Ponto Leste, -1000 -> Ponto Norte)

    Quatro Consultas:
    -1000 -1000 ->  (X-> -1000, Ponto Divisa, Y -> -1000, Ponta Divisa) -> Printa Divisa
    0 0 -> (x-> 0, ponto Leste, Y -> 0, Ponto Norte) ->  Printa (NE), Nordeste 
    -2000 -10000 -> (x-> -2000, ponto Oeste, Y -> -10000, Ponto Sul) ->  Printa (SO), Sudoeste 
    -999 -1001 -> (x -> -999, ponto Oeste, Y -> 10, Ponto Sul) ->  Printa (SE), Sudeste 

    0 -> Return 0;
    */
     long long int totIte, posN, posM;

     while(cin >> totIte){
          
          cin >> posN >> posM;

          int vetX[tam], vetY[tam];
          
          for(int i = 1; i <= totIte; i++){
             
             cin >> vetX[i] >> vetY[i];

               if(vetX[i] == posN || vetY[i] == posM)
                    cout << "divisa" << endl;
               else if(vetX[i] > posN && vetY[i] > posM)
                    cout << "NE" << endl;
               else if(vetX[i] < posN && vetY[i] > posM)
                    cout << "NO" << endl;
               else if(vetX[i] > posN && vetY[i] < posM)
                    cout << "SE" << endl;
               else if(vetX[i] < posN && vetY[i] < posM)
                    cout << "SO" << endl;
          }
     }
}