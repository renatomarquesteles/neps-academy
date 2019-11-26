#include <iostream>
using namespace std;

int main(){
    string risada, vogais = "";
    cin >> risada;
    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i'
           or risada[i] == 'o' or risada[i] == 'u'){
            vogais += risada[i];
        }
    }
    char res = 'S';
    for(int i = 0; i < vogais.size(); i++){
        if(vogais[i] != vogais[vogais.size() - 1 - i]){
            res = 'N';
            break;
        }
    }
    cout << res << endl;
}
