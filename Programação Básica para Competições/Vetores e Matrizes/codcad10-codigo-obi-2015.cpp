#include <iostream>
using namespace std;

int main(){
    int n;
    int v[10000];
    int res = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(i < n-2){
            if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 0){
                res++;
                i += 2;
            }
        }
    }
    cout << res << endl;
}
