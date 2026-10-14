#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int num){
    int re = 1;
    while (num > 0) re *= num,num--;
    return re;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    int n,ans = 1;
    cin >> n >> s;
    for (int i = 0;i < s.length();i++){
        int cal = 0;
        for (int j = i+1;j < s.length();j++){
            cal += s[i] > s[j];
        }
        ans += cal*fact(n-i-1);
        
    }
    cout <<ans;
    return 0;
}