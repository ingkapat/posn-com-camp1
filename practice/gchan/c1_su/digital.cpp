#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s,real;
    ll n,start = 0;
    cin >> s >> n;
    if (('A' <=s[0]&&s[0] <= 'Z') || ('a' <=s[0]&&s[0] <= 'z')){
        for (char c:s){
            int x = c;
            for (int i = 7;i >= 0;i--){
                real += char(((x / (int)pow(2,i)) % 2) + '0');
            }
        }
    }
    else {
        real = s;
    }
    vector<vector<char>> arr(n, vector<char>(n*real.length()+1-real.length()));
    for (ll i = 0;i < n;i++){
        for (ll j = 0;j < n*real.length()+1-real.length();j++){
            arr[i][j] = '_';
        }
    }
    for (ll k = 0;k < real.length();k++){
        if (real[k] == '0'&&k != 0&&real[k-1]== '0'){
            
            for (ll j = start;j < n-1+start;j++){
                arr[n-1][j] = 'x';
            }
            start+= n-1;
        } 
        else if (real[k] == '0'){
            
            for (ll i = 0;i < n;i++){
                if (i == n-1){
                    for (ll j = start;j < n-1+start;j++){
                        arr[i][j] = 'x';
                    }
                    start+= n-1;
                    continue;
                }
                arr[i][start] = 'x'; 
            }
        }
        else if (real[k] == '1' && (k == 0||real[k-1] == '1')){
            
            for (ll j = start;j < n+start;j++){
                arr[0][j] = 'x';
            }
            start+= n-1;
            continue;
        }
        else if(real[k] == '1'){
            for (ll i = 0; i < n;i++){
                for (ll j = start;j < start+n-1;j++){
                    if (i == 0) arr[i][j] = 'x';
                    if (j == start) arr[i][j] = 'x';
                }
            }
            start+=n-1;
        }
        
    }
    
    if (real.length() > 1 && real[real.length()-1] == '1'){
        arr[0][start] = 'x';
    }
    else if(real[real.length()-1] == '0'){
        arr[n-1][start] = 'x';
    }
    for (ll i = 0;i < n;i++){
        for (ll j = 0;j < n*real.length()+1-real.length();j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}