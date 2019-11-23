#include <iostream>
using namespace std;

int main() {
    int n, c_b=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 2){
            c_b += 1;
        }
    }
    if(n % 2 != 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    if(c_b % 2 != 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
