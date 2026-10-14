#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int arr[8] = {},a[8] = {};
    string s,s1;
    int ans = 0;
    cin >> s >> s1;
    for (int i = 0;i < s.length();i++){
        if (s[i] == 'A') arr[0]++;
        else if (s[i] == 'B') arr[1]++;
        else if (s[i] == 'C') arr[2]++;
        else if (s[i] == 'D') arr[3]++;
        else if (s[i] == 'E') arr[4]++;
        else if (s[i] == 'F') arr[5]++;
        else if (s[i] == 'G') arr[6]++;
        else if (s[i] == 'H') arr[7]++;
    }
    for (int i = 0;i < 8;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (int i = 0;i < s1.length();i++){
        if (s1[i] == 'A') a[0]++;
        else if (s1[i] == 'B') a[1]++;
        else if (s1[i] == 'C') a[2]++;
        else if (s1[i] == 'D') a[3]++;
        else if (s1[i] == 'E') a[4]++;
        else if (s1[i] == 'F') a[5]++;
        else if (s1[i] == 'G') a[6]++;
        else if (s1[i] == 'H') a[7]++;
    }
    for (int i = 0;i < 8;i++){
        cout << a[i] << " ";
        if (a[i] != arr[i]) ans++;
        a[i]= abs(a[i] - arr[i]);
    }
    cout << "\n";
    for (int i = 0;i < 8;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    if (ans <= 3){
        cout << "anagram";
    }
    else cout << "no";
    return 0;
}