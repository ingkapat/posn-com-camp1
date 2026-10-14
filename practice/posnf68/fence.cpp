#include <bits/stdc++.h>
using namespace std;
int maxsum = -100000;
void recur(vector<vector<int>> &arr,int i,int j,int sum){
    if (i > arr.size()||i < 0||j > arr.size()||j < 0){
        return;
    }
    else if (arr[i][j] != 1) return;
    arr[i][j] == 0;
    sum++;
    recur(arr,i+1,j,sum);
    recur(arr,i-1,j,sum);
    recur(arr,i,j+1,sum);
    recur(arr,i,j-1,sum);

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int it = s.find('x');
    int x = stoi(s.substr(0,it));
    int y = stoi(s.substr(it+1));
    vector<vector<int>> v(y,vector<int>(x));
    for (int i =0;i < y;i++){
        string temp;
        cin >> temp;
        for (int j =0;j < x;j++){
            v[i][j] = temp[j] - '0';
        }
    }
    bool is = true;
    int sum = 0;
    for (int i =0;i < y;i++){
        for (int j =0;j < x;j++){
            if (v[i][j] == 1&&is){
                recur(v,i,j,sum);
                is = false;
            }
            else if(v[i][j] == 1){
                cout << 0;
                return 0;
            }
        }
    }
    cout << sum;
    return 0;
}