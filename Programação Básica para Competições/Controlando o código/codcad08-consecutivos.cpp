#include <iostream>
using namespace std;

int main(){
    int n, previousValue=-1, top=1, pts=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int currentValue;
        cin >> currentValue;
        if(currentValue == previousValue){
            pts++;
            if(pts > top){
                top = pts;
            }
        } else {
            pts = 1;
        }
        previousValue = currentValue;
    }
    cout << top << endl;
}
