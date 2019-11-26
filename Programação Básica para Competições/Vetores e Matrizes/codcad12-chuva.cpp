#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n][n], B[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }
}
