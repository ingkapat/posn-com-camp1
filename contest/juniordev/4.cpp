#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long n,m;
    cin >> n >> m;
    long long sum = 0;
    long long by,bx;
    vector<vector<long long>> arr;
    for (int i = 0;i < n;i++){
        long long x,y;
        cin >> y >>x;
        if (i == 0)sum+= y;
        else sum+= abs(by - y);
        if (i==n-1) sum+= y;
        sum+= x*2;
        by = y;bx=x;
        arr.push_back({x,y});
    }
    cout << sum << '\n';
    long long fsum = sum;
    for (int i=0;i<m;i++){
        long long t,y,x;
        cin >> t >> y >>x;
        t--;
        if (n == 1) {
            fsum -= arr[0][1] * 2;
            fsum += y * 2;     
        }
        else if (t == 0){
            fsum -= arr[t][1];
            fsum -= abs(arr[t+1][1]-arr[t][1]);
            fsum += y;
            fsum += abs(arr[t+1][1] - y);
        }
        else if (t==n-1){
            fsum -= arr[t][1];
            fsum -= abs(arr[t-1][1] - arr[t][1]);
            fsum += abs(arr[t-1][1] - y);
            fsum += y;
        }
        else {
            fsum-= abs(arr[t-1][1] - arr[t][1]);
            fsum-= abs(arr[t][1] - arr[t+1][1]);
            fsum+= abs(arr[t-1][1] - y);
            fsum+= abs(arr[t+1][1] - y);
        }
        fsum-= arr[t][0]*2;
        fsum+= x*2;

        cout << fsum << "\n";
        arr[t][0] = x;
        arr[t][1] = y;
    }
    return 0;
}