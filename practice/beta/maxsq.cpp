
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    int best = 0;
    int start = 0;
    int L = -1, R = -1;
    for (int i = 0;i < n;i++){
        if (sum < 0){
            start = i;
            sum = 0;
        }
        sum += a[i];
        if (sum > best){
            best = sum;
            R = i;  
            L = start;
        }
    }
    if (L == -1){
        cout << "Empty sequence";
        return 0;
    }
    else {
        for (int i = L;i <= R;i++){
            cout << a[i] << " ";
        }
        cout << '\n' << best;
    }
    return 0;
}
