#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> day = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    vector<int> month = {31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m,sum=0;
    scanf("%d %d",&d,&m);
    for (int i = 0;i < m - 1;i++){
        sum+= month[i];
    }
    sum+=d;
    sum = (sum-1) %7;
    cout << day[sum];
    return 0;
}