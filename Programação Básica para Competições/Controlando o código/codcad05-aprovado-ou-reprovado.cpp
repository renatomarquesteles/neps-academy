#include <iostream>
using namespace std;

int main(){
    double n1, n2;
    cin >> n1 >> n2;
    if((n1+n2)/2 < 4){
        cout << "Reprovado\n";
    } else if((n1+n2)/2 < 7){
        cout << "Recuperacao\n";
    } else {
        cout << "Aprovado\n";
    }
}
