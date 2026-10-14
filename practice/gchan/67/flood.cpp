#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n,h[10010],sum = 0,max;
    cin >> n;
    for (int i =0;i <n;i++){
        cin >> h[i];
    }
    max = 0;
    for (int i = 1;i < n-1;i++){
        int l = h[i],r = h[i];
        for (int j = 0;j < i;j++){
            if (h[j] > l) l = h[j];
        }
        for (int k = i+1;k < n;k++){
            if (h[k] > r) r = h[k];
        }
        sum += min(l,r) - h[i];
    }
    cout << sum;
    return 0;
}