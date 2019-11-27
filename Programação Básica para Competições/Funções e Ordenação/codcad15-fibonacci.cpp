#include <iostream>
using namespace std;

int fib(int n){
    if(n < 2){
        return 1; // Casos base: fib(1) e fib(0)
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
