#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n+1] = {};
    for (int i = 2;i < n;i++){
        for (int j = 2;j <= i;j++){
            if (i % j == 0){
                arr[i]++;
            }
        }
    }
    for (int i = 2;i <= n;i++){
        if (arr[i] == 1){
            cout << i << "\n";
        }
    }
    return 0;
}