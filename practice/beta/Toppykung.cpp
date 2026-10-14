#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    string k;
    vector<string> s;
    for (int i = 0;i<n;i++){
        int have = 0;
        cin >> k;
        for (int j = 0;j < i;j++){
            if (s[j] == k)have++;
        }
        if (have == 0){
            s.push_back(k);
        }
    }
    sort(s.begin(),s.end());
    for (int i =0;i<s.size();i++){
        cout << s[i] << "\n";
    }
    return 0;
}