#include <iostream>
using namespace std;

int main(){
    int n_dias, dia = 0, total = 0, acessos_dia;
    cin >> n_dias;
    while(total < 1000000){
        cin >> acessos_dia;
        total += acessos_dia;
        dia += 1;
    }
    cout << dia << endl;
}
