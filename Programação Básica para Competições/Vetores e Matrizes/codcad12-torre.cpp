#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int m[n][n];
    int somaLinha[n];
    int somaColuna[n];
    int pesoMax = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    for(i = 0; i < n; i++){
        somaLinha[i] = 0;
        somaColuna[i] = 0;
        for(j = 0; j < n; j++){
            somaLinha[i] += m[i][j];
            somaColuna[i] += m[j][i];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            int peso = somaLinha[i] + somaColuna[j] - 2 * m[i][j];
            if(peso > pesoMax){
                pesoMax = peso;
            }
        }
    }
    cout << pesoMax << endl;
}
