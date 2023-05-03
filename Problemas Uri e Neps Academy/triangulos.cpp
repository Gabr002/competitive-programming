#include <iostream>
using namespace std;

int main(){
    double num1, num2, num3; 
    double tot;
    cin >> num1  >> num2 >> num3;
    if((num1+num2) > num3 && (num2+num3) > num1 && (num1+num3) >num2){
        tot = num1+num2+num3;
        printf("Perimetro = %.1f\n", tot);
    }else{
        tot = ((num1+num2)*num3)/2;
        printf("Area = %.1f\n", tot);
    }
    return 0;
}