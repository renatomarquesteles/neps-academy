#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }
    int soma = 0;
    for(int j = 0; j < n; j++){
        soma += m[0][j];
    }
    int somaDiagEsq = 0;
    int somaDiagDir = 0;
    for(int i = 0; i < n; i++){
        int somaLinha = 0;
        for(int j = 0; j < n; j++){
            somaLinha += m[i][j];
        }
        if(somaLinha != soma){
            soma = -1;
            break;
        }
        somaDiagEsq += m[i][i];
        somaDiagDir += m[i][n-1-i];
    }
    if(somaDiagDir != soma || somaDiagEsq != soma){
        soma = -1;
    }
    if(soma != -1){
        for(int j = 0; j < n; j++){
            int somaColuna = 0;
            for(int i = 0; i < n; i++){
                somaColuna += m[i][j];
            }
            if(somaColuna != soma){
                soma = -1;
                break;
            }
        }
    }
    cout << soma << endl;
}
