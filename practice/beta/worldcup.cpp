#include <bits/stdc++.h>
using namespace std;

struct teamstat{
    string name;
    int score = 0;
    int diff = 0;
    int goal = 0;
};

bool compare(teamstat& a,teamstat& b){
    if(a.score != b.score){
        return a.score > b.score;
    }
    else if(a.diff != b.diff){
        return a.diff > b.diff;
    }
    else if(a.goal != b.goal){
        return a.goal > b.goal;
    }
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    vector<teamstat> table(4);
    for (int i = 0;i < 4;i++){
        cin >> table[i].name;
    }
    vector<vector<int>> s(4,vector<int>(4));
    for (int i = 0;i < 4;i++){
        for (int j = 0;j < 4;j++){
            cin >> s[i][j];
        }   
    }
    for (int i = 0;i < 4;i++){
        for (int j = 0;j < 4;j++){
            if (s[i][j] > s[j][i]){
                table[i].score += 3;
            }
            else if (s[i][j] == s[j][i] && i != j){
                table[i].score +=1;
            }
            table[i].diff = table[i].diff + s[i][j] - s[j][i];
            table[i].goal += s[i][j];
        }
    }
    sort(table.begin(),table.end(),compare);

    for (int i = 0;i < 4;i++){
        cout << table[i].name << " " << table[i].score << "\n";
    }

    return 0;
}