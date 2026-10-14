#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> n;
    int i  = 1,k = 0,num;
    cin >> num;
    while (k < num){
        k = 1 + 6*(i-1) + 4*(i-1)*(i-2);
        n.push_back(k);
        i++;
    }
    for (int i = 0;1;i++){
        if (num == n[i]-2){
            cout << "Cannot find top-right corner.";
            return 0;
        }
        else if (num == n[i]){
            cout << num;
            return 0;
        }
        else if (n[i] > num){
            cout << n[i-1];
            return 0;
        }
        
        
    }
    return 0;
}