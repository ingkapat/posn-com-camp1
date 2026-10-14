#include <bits/stdc++.h>
using namespace std;

vector<int> num;

void recur(int n){
    num.push_back(n);
    if (n==1) return;
    else {
        if (n % 2 ==0) recur(n/2);
        else recur(n*3 +1);
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    recur(n);
    for (int i =0;i<num.size();i++){
        cout << num[i] << " ";
    }
    cout << "\nsteps = " << num.size()-1; 
}