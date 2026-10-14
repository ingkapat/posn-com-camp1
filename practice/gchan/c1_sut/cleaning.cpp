#include <iostream>
#include <cctype>
#include <vector>   
#include <string>
using namespace std;

vector<vector<int>> v;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,ans = 0,num =0;
    string s;
    bool check = false;
    cin >> n >> s;
    int ind = 0;
    for (int i = 0;i <n;i++){
        int j = 0;
        vector<int> temp;
        while (j < n){
            if (isdigit(s[ind])){
                num = num*10 + s[ind] - '0';
                check = true;
            }
            else if(check) {
                temp.push_back(num);
                num =0;
                check = false;
                j++;
            }
            ind++;
        }
        v.push_back(temp);
    }
    for (int i = 0;i < n;i++){
        for (int j =0;j< n;j++){
            if (v[i][j] == 0) continue;
            int tsum = v[i][j]*4,sum =0;
            if(j-1 >= 0){
                if (v[i][j-1] >= v[i][j]){
                    sum-=v[i][j];
                }
                else {
                    sum-= v[i][j-1];
                }
            }
            if(j+1 < n){
                
                if (v[i][j+1] >= v[i][j]){
                    sum-=v[i][j];
                }
                else {
                    sum-= v[i][j+1];
                } 
            }
            if (i-1 >= 0){
                
                if (v[i-1][j] >= v[i][j]){
                    sum-=v[i][j];
                }
                else {
                    sum-= v[i-1][j];
                }
            }
            if (i+1 < n){
                if (v[i+1][j] >= v[i][j]){
                    sum-=v[i][j];
                }
                else {
                    sum-= v[i+1][j];
                }
            }
            ans += tsum + sum+2;
           
        }
    }
    cout << ans;
    return 0;
}