#include <iostream>
using namespace std;

int main(){
    int n, pts = 0;
    string gabarito, candidato;
    cin >> n >> gabarito >> candidato;
    for(int i = 0; i < n; i++){
        if(gabarito[i] == candidato[i]){
            pts++;
        }
    }
    cout << pts << endl;
}
