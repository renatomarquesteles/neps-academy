#include <iostream>
using namespace std;

int main(){
    int n;
    string nums = "";
    cin >> n;
    for(int i = 0; i < n; i++){
        string num;
        cin >> num;
        nums += num;
    }
    int qtd[10] = {};
    for(int i = 0; i < nums.size(); i++){
        qtd[(int)(nums[i] - '0')]++;
    }
    for(int i = 0; i < 10; i++){
        cout << i << " - " << qtd[i] << endl;
    }
}
