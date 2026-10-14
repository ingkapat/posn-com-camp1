#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int,greater<int>> v;
    vector<int> arr;
    string s;
    cin >> s;
    int before =0,sum;
    for (int i = 0;i < s.length();i++){
        int n = s[i] - '0';
        before = before*10 + n;
        if (i +1 == s.length() || (s[i] == '0' && s[i+1] != '0')){
            v[before] = 0;
            arr.push_back(before);
            before = 0;
        }
    }
    cin >> sum;
    sort(arr.begin(),arr.end(),greater<int>());
    int i=0;
    while (sum != 0){
        if (double(sum / arr[i]) > 0){
            v[arr[i]]+= sum/arr[i];
            sum=sum%arr[i];
        }
        i++;
    }
    
    for (const auto& x:v){
        if (x.second == 0) continue;
        cout << "B" << x.first << ":" << x.second << '\n';
    }
    return 0;
}