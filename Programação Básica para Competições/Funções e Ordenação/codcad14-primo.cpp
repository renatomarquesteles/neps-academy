#include <iostream>

using namespace std;

bool eh_primo(int x){
    for(int i = 2; i < x; i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
}
