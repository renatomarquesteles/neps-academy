#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int v[100005];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v, v+n);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
