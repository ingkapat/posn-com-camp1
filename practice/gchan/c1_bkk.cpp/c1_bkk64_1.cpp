#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m,sum=0;
    cin >> n >> m;
    for (n;n<m;n++){
        if (n % 2 == 0|| n%3==0){
            sum+=n;
        }
    }
    cout << sum;
    return 0;
}