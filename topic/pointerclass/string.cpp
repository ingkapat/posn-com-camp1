#include <iostream>
#include <string>
using namespace std;

void findMinMax(){

}
int main(){
    string s,find;
    int sum = 0;
    cin >> s >> find;
    char *pf = &find[0];
    char* p = &s[0];
    for (int i = 0;i < s.length();i++){
        if (*pf == *(p+i)){
            int j = 0;
            while (*(pf+j) != '\0'){
                if (*(pf+j) == *(p+i+j)){
                    sum++;
                }
                j++;
            }
        }
        if (sum == find.length()){
            cout << i << " ";
        }
        sum = 0;
    }
    return 0;
}