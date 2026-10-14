#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    for (int i = 0;i < s.length();i++){
        if (65 <= s[i]&& s[i] <= 65+25){ 
            cout << char((s[i]+n -'A')%26 + 65);
            continue;
        }
        else if(97 <= s[i]&& s[i] <= 97+25){
            cout << char((s[i]+n-'a')%26 + 97);
            continue;
        }
        cout << s[i];
    }
    return 0;
}