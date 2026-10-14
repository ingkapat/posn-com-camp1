#include "bits/stdc++.h"
using namespace std;

int main(){
    string s,result = "";
    getline(cin,s);
    s.push_back(' ');
    s.push_back(' ');
    for (int i = 0;i < s.size();i++){
        if (s[i] == 'a'){
            if (s[i+1] == 'p'){
                if (s[i+2] == 'a'){
                    result += 'a';
                    i = i+2;
                    continue;
                }
            }
        }
        else if (s[i] == 'e'){
            if (s[i+1] == 'p'){
                if (s[i+2] == 'e'){
                    result += 'e';
                    i = i+2;
                    continue;
                }
            }
        }
        else if (s[i] == 'i'){
            if (s[i+1] == 'p'){
                if (s[i+2] == 'i'){
                    result += 'i';
                    i = i+2;
                    continue;
                }
            }
        }
        else if (s[i] == 'o'){
            if (s[i+1] == 'p'){
                if (s[i+2] == 'o'){
                    result += 'o';
                    i = i+2;
                    continue;
                }
            }
        }
        else if (s[i] == 'u'){
            if (s[i+1] == 'p'){
                if (s[i+2] == 'u'){
                    result += 'u';
                    i = i+2;
                    continue;
                }
            }
        }
        else {
            result += s[i];
        }
    }
    cout << result;
    return 0;
}