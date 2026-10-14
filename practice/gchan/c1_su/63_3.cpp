#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,sum = 0,num,max = 0;
    cin >> n;
    for (int i =0;i< n;i++){
        cin >> num;
        if (num > max){
            max = num;
            sum+=max;
        }
    }
    cout << sum;
    return 0;
}