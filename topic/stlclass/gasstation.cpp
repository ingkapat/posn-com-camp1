#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i= 0 ;i< n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int m;
    cin >> m;
    for (int i = 0;i < m;i++){
        int a;
        cin >> a;
        auto low = lower_bound(v.begin(),v.end(),a);
        if (low == v.begin()){
            cout << abs(*low - a) << '\n';
        }
        else if (low  == v.end()){
            cout << abs(*(low-1) - a) << '\n';
        }
        else{
            cout << min(abs(*low -a),abs(*(low-1)-a)) << '\n';
        }
    }
    return 0;
}