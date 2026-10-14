#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    string k;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> k;
        if (k.back() == '1' ||k.back() == '3' || k.back() == '5' ||k.back() == '7' || k.back() == '9' || k == "2") cout << "T" << "\n";
        else cout << "F" << "\n";
    }
    return 0;
}