#include <bits/stdc++.h>
using namespace std;
vector<int> v(10);
vector<int> ans(5);
bool found = false;

void recur(int ind,int count,int sum){
    if (count == 5){
        if (sum == 120){
            for (int x:ans){
                cout << x << "\n";
            }
            found = true;
        }
        return;
    }
    if (ind == 10)return;
    ans[count] = ind +1;
    recur(ind+1,count+1,sum+v[ind]);
    if (found){
        return;
    }
    recur(ind+1,count,sum);
}

int main(){
    for (int i = 0;i < 10;i++){
        cin >> v[i];
    }
    recur(0,0,0);
    return 0;
}