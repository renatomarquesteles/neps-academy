#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x < 0){
        cout << "negativo\n";
    } else if(x == 0){
        cout << "nulo\n";
    } else {
        cout << "positivo\n";
    }
}
