#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s1,s2,s3;
    getline(cin,s1);
    int i =0;
    while (s1[i]!='\0'){
        if ((65 <= s1[i]&&s1[i] < 65+26)||(97 <= s1[i]&&s1[i] < 97+26)){
            s3.push_back(tolower(s1[i]));
        }
        i++;
    }
    i =0;
    while (s3[i] != '\0'){
        s2.insert(s2.begin(),s3[i]);
        i++;
    }
    if (s2 == s3){
        cout << "yes";
    }
    else cout << "no";
    return 0;
}
