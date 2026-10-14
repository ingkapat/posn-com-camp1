#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    unordered_map<int,int> student;
    vector<int> ans;
    int n,m;
    cin >> n >> m;
    for (int i = 0;i < m;i++){
        int c,s;
        cin >> c >> s;
        student[s] = c;
    }
    while (true){
        char act;
        cin >> act;
        if (act == 'X') break;
        else if (act == 'E'){
            int num;
            cin >> num;
            if (ans.empty){
                ans.push_back(num);
            }
            
        }
    }
    return 0;
}