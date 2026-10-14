#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,bestdiff = LLONG_MAX,suma,sumb,ind;
vector<ll> in,ansa,ansb;

void recur(vector<ll> &a,vector<ll> &b,ll suma,ll sumb,ll ind){
    if (ind == n){
        if (abs((ll)a.size()-(ll)b.size()) > 1 || a.size() > b.size()) return;
        ll curdiff = abs(suma - sumb);
        if (bestdiff >= curdiff){
            bestdiff = curdiff;
            ansa = a;
            ansb = b;
            return;
        }
        return;
    }
    a.push_back(in[ind]);
    suma += in[ind];
    recur(a,b,suma,sumb,ind+1);
    a.pop_back();
    suma -= in[ind];
    b.push_back(in[ind]);
    sumb += in[ind];
    recur(a,b,suma,sumb,ind+1);
    b.pop_back();
    sumb -= in[ind];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0;i < n;i++){
        ll k;
        cin >> k;
        in.push_back(k); 
    }
    vector<ll> a,b;
    recur(a,b,0,0,0);
    //out
    for (int i = 0;i < ansa.size();i++) cout << ansa[i] <<' ';
    cout << '\n';
    for (int i = 0;i < ansb.size();i++) cout << ansb[i] <<' ';
    return 0;
}