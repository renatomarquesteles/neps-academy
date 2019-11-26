#include <iostream>
using namespace std;

int main(){
    int i, j;
    int matriz[3][2];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
