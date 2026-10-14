#include <iostream>
#include <vector>
using namespace std;
vector<string> num;
vector<bool> used;
int n;
long long ans = -10000;

void recur(string s,int tua){
    if (tua == n){
        long long k = 0;
        for (char c:s){
            k = k*2 + (c-'0');
        }
        ans = max(k,ans);
        return;
    }
    for (int i = 0;i < n;i++){
        if (used[i]) continue;
        used[i] = true;
        recur(s+string(num[i]),tua+1);
        used[i] = false;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    used.resize(n,false);
    for (int i = 0;i < n;i++){
        int a;
        cin >> a;
        string temp;
        while (a>0){
            temp = char('0'+a%2)+temp;
            a=a/2;
        }
        num.push_back(temp);
    }
    recur("",0);
    cout << ans;
    return 0;
}  