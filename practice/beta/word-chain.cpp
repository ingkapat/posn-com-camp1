#include <bits/stdc++.h>
using namespace std;
int L;

int check(string s,string k){
    int a = 0;
    for (int i = 0;i < L;i++){
        if (s[i] == k[i]) a++;
    }
    if (a >= L-2) return 0;
    return 1;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N;
    string k,s,ans;
    int no = 1;
    cin >> L >> N;
    for (int i = 0;i < N;i++){
        cin >> s;
        if (i != 0 && check(s,k) && no == 1){
            no = 2;
            ans = k;
        }
        if (i == N-1 && no == 1){
            ans = s;
        }
        k = s;
    }
    cout << ans;
    return 0;
}