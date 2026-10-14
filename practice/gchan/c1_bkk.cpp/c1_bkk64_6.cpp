#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string n;
    int sum = 0;
    cin >> n;
    for (int i = 0;i < n.length()-1;i++){
        int num = n[i] - '0';
        if (i % 2 == 0) sum+=num;
        else sum+=num*3;
    }
    int ans = (10 - (sum % 10)) % 10;
    if (ans == n[n.length()-1] - '0') cout << "YES";
    else cout << "NO";
    return 0;
}