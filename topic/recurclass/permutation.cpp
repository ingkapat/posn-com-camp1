#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int sum = 0;
vector<string> ans;

void per(string &s,int l,int r){
    if (l == r){
        sum++;
        ans.push_back(s);
        return;
    }
    for (int i =l;i< s.length();i++){
        swap(s[l],s[i]);
        per(s,l+1,r);
        swap(s[l],s[i]);
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    per(s,0,s.length()-1);
    sort(ans.begin(),ans.end());
    for (int i =0;i< ans.size();i++){
        cout << ans[i] << "\n";
    }
    cout << "total = " << sum;
    return 0;
}