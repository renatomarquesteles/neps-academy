#include <iostream>
using namespace std;

int main(){
    int n_bandeijas, n_latas, n_copos, quebrou = 0;
    cin >> n_bandeijas;
    while(n_bandeijas > 0){
        cin >> n_latas >> n_copos;
        if(n_latas > n_copos){
            quebrou += n_copos;
        }
        n_bandeijas -= 1;
    }
    cout << quebrou << endl;
}
