#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i =0;i < n;i++){
        int x;
        vector<int> ans;
        cin >> x;
        if (x == 0){
            cout << x << '\n';
            continue;
        }
        while(x!=0){
            int r = (x%5 +5)%5;
            if (r <= 2){
                cout << r << ' ';
                x = (x-r)/5;
            }
            else{
                cout << r-5 << ' ';
                x = (x-r+5)/5;
            }
        }
        cout << '\n';
    }
    return 0;
}