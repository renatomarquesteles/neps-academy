#include <iostream>
using namespace std;

int main(){
    char op;
    double x, y;
    cin >> op >> x >> y;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(op == 'D'){
        cout << x/y;
    }else if(op == 'M'){
        cout << x*y;
    }
    cout << endl;
}
