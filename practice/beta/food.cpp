#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int arr[9] = {};
int r[9] = {};
vector<int> v;

void recur(int a,int no){
    if (a >= n){
        cout << no << " ";
        for (int i = 0;i < n-1;i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1;i <= n;i++){
        if (r[i] == 1 || i == no) continue;
        r[i] = 1;
        v.push_back(i);
        recur(a+1,no);
        r[i] = 0;
        v.pop_back();
    }
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0;i < m;i++){
        cin >> k;
        arr[k]++;
    }
    for (int i = 1;i <= n;i++){
        if (arr[i] == 0){
            recur(1,i);
        }
    }
    return 0;
}
