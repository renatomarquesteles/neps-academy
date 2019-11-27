#include <iostream>
using namespace std;

int main(){
    int v[5] = {4, 1, 2, 5, 3};
    int lista[5] = {};
    int ind_menor = 0;

    for(int i = 0; i < 5; i++){
        int menor = 100000;

        for(int j = 0; j < 5; j++){
            if(lista[j] == 0 and v[j] < menor){
                menor = v[j];
                ind_menor = j;
            }
        }
        cout << menor << " ";

        lista[ind_menor] = 1;
    }
}
