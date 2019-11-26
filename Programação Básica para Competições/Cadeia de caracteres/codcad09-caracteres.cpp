#include <iostream>
using namespace std;

int main(){
    char letra;
    cin >> letra;
    cout << letra << " = " << (int)letra << endl;
    if(letra >= 'a' and letra <= 'z'){
        cout << "letra minuscula\n";
    }
    if(letra >= 'A' and letra <= 'Z'){
        cout << "letra maiuscula\n";
    }
}
