#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    double x;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        cout << sqrt(x) << endl;
    }
}
