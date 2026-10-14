#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    char num[100];
    int last,sum=0;
    cin >> num;
    last = num[15] -= '0';
    for (int i = 0;i < 15;i++){
        num[i] -= '0';
        if (i % 2 == 0){
            num[i] = (int)num[i] * 2;
            if ((int)num[i] > 9){
                sum += (int)num[i] % 10;
                sum += (int)num[i] / 10;
                continue;
            }
        }
        sum+=(int)num[i];
    }
    if ((10 - ((int)sum % 10)) % 10 == last){
        cout << "yes";
        return 0;
    }
    cout << "no";
    return 0;
}