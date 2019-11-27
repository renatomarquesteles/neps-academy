#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n], ordenado[n], bonecas[n];
    for(int i = 0; i < n; i++){
        int valor;
        cin >> valor;
        v[i] = valor;
        ordenado[i] = valor;
    }

    sort(ordenado, ordenado + n);
    int qtd = 0;
    for(int i = 0; i < n; i++){
        if(v[i] != ordenado[i]){
            bonecas[qtd] = v[i];
            qtd++;
        }
    }
    sort(bonecas, bonecas+qtd);
    cout << qtd << endl;
    for(int i = 0; i < qtd; i++){
        cout << bonecas[i] << " ";
    }
    cout << endl;
}
