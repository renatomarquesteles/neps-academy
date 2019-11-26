#include <iostream>
#include <cmath>

using namespace std;

int vGlobal;

int aumentaValor(int x){
    vGlobal += x;
    return vGlobal;
}

double media(double x, double y, double z){
    return (x+y+z)/3.0;
}

int main(){
    cout << media(2, 4, 6) << endl;
    cin >> vGlobal;
    cout << aumentaValor(5) << endl;
    cout << aumentaValor(1) << endl;
    cout << aumentaValor(2) << endl;
}
