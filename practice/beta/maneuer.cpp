#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> v1,v2;
vector<int> ans1,ans2;
long long bdiff = LLONG_MAX;
int n;

void doi(vector<int> &v,int ind){
    int num1 = n/2;
    int num2 = n-num1;
    if (v1.size() > num1 || v2.size() > num2) return;
    else if (ind == n){
        if (v1.size() == min(num1,num2) && v2.size() == max(num1,num2)){
            long long sum1 = 0,sum2 = 0;
            for (int x:v1) sum1+=x;
            for (int x:v2) sum2+=x;
            long long diff = abs(sum1 - sum2);
            if (diff <= bdiff){
                bdiff = diff;
                ans1 = v1;
                ans2 = v2;
            }
        }
        return;
    }
    v1.push_back(v[ind]);
    doi(v,ind+1);
    v1.pop_back();
    v2.push_back(v[ind]);
    doi(v,ind+1);
    v2.pop_back();
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    vector<int> v(n);
    for (int i =0;i < n;i++){
        cin >> v[i];
    }
    doi(v,0);
    for (int i =0;i< ans1.size();i++){
        cout << ans1[i] << " ";
    }
    cout << '\n';
    for (int i =0;i< ans2.size();i++){
        cout << ans2[i] << " ";
    }
    return 0;
}