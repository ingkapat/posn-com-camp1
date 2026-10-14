#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    vector<int> ans;
    cin >> n;
    while (ans.size() < 5){
        bool c = true;
        n--;
        for (int i = 2;i <= sqrt(n);i++){
            if (n % i == 0) {c = false;break;}
        }
        if (c) ans.insert(ans.begin(),n);
    }
    for (int i = 0;i < 5;i++){
        cout << ans[i] << " ";
    }
}