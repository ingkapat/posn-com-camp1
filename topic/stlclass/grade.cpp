#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++){
        cin >> v[i];
    }
    cin >> m;
    sort(v.begin(),v.end());
    for (int i = 0;i < m;i++){
        int st,sp;
        cin >> st >> sp;
        auto a = lower_bound(v.begin(),v.end(),st);
        auto b = upper_bound(v.begin(),v.end(),sp);
        cout << b-a << "\n";
    }
    return 0;
}