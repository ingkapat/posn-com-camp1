#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,m,k,l,c,sum = 0,con;
    cin >> n >> m >> k >> l >> c;
    for (int i =0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin >> con;
            con /= c;
            sum += con;
        }
    }
    double ans = (sum + k*l);
    if (ans > int(ans)){
        cout << int(ans)+1;
        return 0;
    }
    cout << int(ans);
    return 0;
}