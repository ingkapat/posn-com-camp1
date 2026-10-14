#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int s;
    cin >> s;
    int n = 3600;
    for (int i = 0;i<3;i++){
        if (s/n % 10 >= 0 && s/n < 10){
            cout << "0" << s/n;
        }
        else{
            cout << s/n;
        }
        if (i != 2){
            cout << ":";
        }
        s%=n;
        n/=60;
    }
    return 0;
}