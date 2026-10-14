#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0;i < n;i++){
        cin >> v[i];
    }
    for (auto it = v.begin();it != v.end();){
        if (*it < k){
            it = v.erase(it);
        }
        else it++;
    }
    for (int x:v){
        cout << x <<" ";
    }
    return 0;
}