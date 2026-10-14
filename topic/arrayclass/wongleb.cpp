#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int balance = 0;
    bool check = true;
    for (int i = 0;i<s.length();i++){
        if (s[i] == '(') balance++;
        else balance--;
        if (balance < 0) check = false;
    }
    if (balance > 0) check = false;
    if (check){
        cout << "YES";
    }
    else cout << "FALSE";
    return 0;
}