#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int num,sum = 0,n = 10;
    for (int i = 0;i < 9;i++){
        cin >> num;
        num *= n;
        sum +=num;
        n--;
    }
    cout << (11 - (sum % 11))%11;
    return 0;
}