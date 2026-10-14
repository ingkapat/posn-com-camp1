#include <bits/stdc++.h>
using namespace std;

struct student{
    int time;
    int bun;
    int hi;
};

bool mysort(student a,student b){
    if (a.time != b.time){
        return a.time < b.time;
    }
    else if (a.bun != b.bun){
        return a.bun > b.bun; 
    }
    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long n,ans = 0;
    cin >>n;
    vector<student> arr;
    for (int i = 0;i < n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        arr.push_back({a,b,c});
    }
    stable_sort(arr.begin(),arr.end(),mysort);
    for(int i = 0;i < n;i++){
        for (int j = i+1;j < n;j++){
            bool temp = true;
            for (int k = i+1;k < j;k++){
                if (arr[k].hi > min(arr[i].hi,arr[j].hi)){
                    temp = false;
                    break;
                }
            }
            if (temp) ans++; 
        }
    }
    cout << ans;
    return 0;
}