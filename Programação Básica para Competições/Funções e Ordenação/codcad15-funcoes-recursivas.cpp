#include <iostream>
using namespace std;

int fatorial(int N){
    if(N <= 1){ // Casos bases
        return 1;
    }
    return N * fatorial(N-1); // Recorr�ncia
}

int main(){
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
}
