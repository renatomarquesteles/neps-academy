#include <iostream>
using namespace std;

int hanoi(int n){
    if(n == 1){
        return 1;
    }
    return 2*hanoi(n-1)+1;
}

int main(){
    int n = 1;
    while(true){
        int N;
        cin >> N;
        if(N == 0){
            break;
        }
        cout << "Teste " << n << "\n";
        cout << hanoi(N) << "\n\n";
        n++;
    }
}
