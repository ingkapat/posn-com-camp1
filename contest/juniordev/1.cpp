#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int arr[3];
    for (int i = 0;i < 3;i++){
        cin >> arr[i];
    }
    for (int i = 0;i < 3;i++){
        int n = arr[i];
        for (int j = 0;j < 3;j++){
            int m = arr[j];
            if (j == i){
                continue;
            }
            for (int k = 0;k < 3;k++){
                if (k == i||k == j){
                    continue;
                }
                if (n + m == arr[k]) {
                    cout << "YES" << '\n' << min(n,m) << "+" << max(n,m) << "=" <<arr[k];
                    return 0;
                }
                else if (n - m == arr[k]){
                    cout << "YES" << '\n' << n << "-" << m << "=" <<arr[k];
                    return 0;
                }
                else if (n * m == arr[k]){
                    cout << "YES" << '\n' << min(n,m) << "*" << max(n,m) << "=" <<arr[k];
                    return 0;
                }
                else if (n / m == arr[k] && n%m==0){
                    cout << "YES" << '\n' << n << "/" << m << "=" <<arr[k];
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}