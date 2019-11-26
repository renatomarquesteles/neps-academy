#include <iostream>
using namespace std;

int main(){
    string nome;
    int a=0, e=0, i=0, o=0, u=0;

    getline(cin, nome);
    for(int j = 0; j < nome.size(); j++){
        if(nome[j] == 'a'){
            a++;
        }else if(nome[j] == 'e'){
            e++;
        }else if(nome[j] == 'i'){
            i++;
        }else if(nome[j] == 'o'){
            o++;
        } else if(nome[j] == 'u'){
            u++;
        }
    }
    cout << "a = " << a << endl;
    cout << "e = " << e << endl;
    cout << "i = " << i << endl;
    cout << "o = " << o << endl;
    cout << "u = " << u << endl;
}
