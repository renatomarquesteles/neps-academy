#include <iostream>
using namespace std;

int main() {
    /*
        < menor
        > maior
        <= menor ou igual
        >= maior ou igual
        == igual
        != diferente

        and E
        or OU

        % m�dulo (resto da divis�o)
    */
    int x;
    cin >> x;
    if(x > 0 and x % 2 == 0) {
        cout << "x positivo e par\n";
    } else {
        if(x <= 0) {
            cout << "x nao positivo\n";
        }
        if(x % 2 != 0){
            cout << "x nao par\n";
        }
    }
}
