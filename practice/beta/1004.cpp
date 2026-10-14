#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> student;
vector<int> ans;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    for (int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        student[b] = a;
    }
    char x;
    while (cin >> x && x != 'X'){
        if (x == 'E'){
            int id;
            cin >> id;
            if (ans.empty()){
                ans.push_back(id);
            }
            else {
                int i = ans.size()-1;
                bool check = true;
                while (student[id] != student[ans[i]]){
                    if (i <= 0){
                        if (student[id] == 0 ){
                            check = false;
                            break;
                        }
                        ans.push_back(id);
                        check = false;
                        break;
                    }
                    i--;
                }
                if (check){
                    ans.insert(ans.begin() + i+1,id);
                }
            }
        }
        else if (x == 'D'){
            if (ans.empty()){
                cout << "empty" << '\n';
            }
            else {
                cout << ans[0] << '\n';
                student[ans[0]] = 0;
                ans.erase(ans.begin());
            }
        }
    }
    cout << 0;
    return 0;
}