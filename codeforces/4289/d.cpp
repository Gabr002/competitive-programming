#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void setProb(string tipo, double& a, double& b, double& o){
    if(tipo == "A"){ 
        a = 0.75; b = 0.0; o = 0.25;
    }else if(tipo == "B"){ 
        a = 0.0; b = 0.75; o = 0.25;
    }else if(tipo == "O"){ 
        a = 0.0; b = 0.0; o = 1.0;
    }else{ 
        a = 0.5; b = 0.5; o = 0.5;
    }
}

int main(){ _
    string am1, am2, ap1, ap2; cin >> am1 >> am2 >> ap1 >> ap2;
    
    double pA_am1, pB_am1, pO_am1;
    double pA_am2, pB_am2, pO_am2;
    double pA_ap1, pB_ap1, pO_ap1;
    double pA_ap2, pB_ap2, pO_ap2;

    setProb(am1, pA_am1, pB_am1, pO_am1);
    setProb(am2, pA_am2, pB_am2, pO_am2);
    setProb(ap1, pA_ap1, pB_ap1, pO_ap1);
    setProb(ap2, pA_ap2, pB_ap2, pO_ap2);

    // A probabilidade de passar os genes dos pais para os filhos...
    double pA_mae, pB_mae, pO_mae;
    double pA_pai, pB_pai, pO_pai;
    
    pA_mae = (pA_am1 + pA_am2)/2;
    pB_mae = (pB_am1 + pB_am2)/2;
    pO_mae = (pO_am1 + pO_am2)/2;
    pA_pai = (pA_ap1 + pA_ap2)/2;
    pB_pai = (pB_ap1 + pB_ap2)/2;
    pO_pai = (pO_ap1 + pO_ap2)/2;

    // A probabilidade do filho ter um tipo sang. com base nos genes passado pelos pais...
    double pA_filho, pB_filho, pAB_filho, pO_filho;

    pA_filho = (pA_mae * pA_pai)+(pA_mae * pO_pai)+(pO_mae * pA_pai);
    pB_filho = (pB_mae * pB_pai)+(pB_mae * pO_pai)+(pO_mae * pB_pai);
    pAB_filho = (pB_mae * pA_pai) + (pA_mae * pB_pai);
    pO_filho = (pO_mae * pO_pai);

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << pA_filho << " " << pB_filho << " " << pAB_filho << " " << pO_filho << " " << endl;
    
    return 0;
}

// A -> aa | ao -> a:3/4  o:1/4 -> ab ao ob oo -> ab:9/16 ao:3/16 ob:3/16 oo:1/16  
// B -> bb | bo -> b:3/4  o:1/4 

// O -> oo -> o: 1
// O -> oo -> o: 1

// AB -> ab -> ab: 1/2

