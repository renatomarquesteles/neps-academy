#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fita[n];
    for(int i = 0; i < n; i++){
        cin >> fita[i];
    }

    for(int i = 0; i < n; i++){
        if(fita[i] == -1){
            int dir = n, esq = n, j = i;
            while(j < n){
                if(fita[j] == 0){
                    dir = j-i;
                    break;
                }
                j++;
            }
            j = i;
            while(j >= 0){
                if(fita[j] == 0){
                    esq = i-j;
                    break;
                }
                j--;
            }
            if(esq > 9){
                esq = 9;
            }
            if(dir > 9){
                dir = 9;
            }
            if(esq < dir){
                fita[i] = esq;
            }else{
                fita[i] = dir;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << fita[i];
        if(i<n-1){
            cout << ' ';
        }
    }
    cout << endl;
}
