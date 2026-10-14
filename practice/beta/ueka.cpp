#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    scanf("%d",&n);
    set<int> s;
    set<int> p;
    for (int i = 0;i < n;++i){
        scanf("%d",&x);
        if (s.count(x) > 0){
            p.insert(x);
        }
        s.insert(x);
    }
    int num = s.size(), plus = p.size();
    printf("%d",(num + 1 + plus)/2);
    return 0;
}