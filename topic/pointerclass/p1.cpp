#include <iostream>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a,b,*p1,*p2;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    *p1+=5; 
    *p2+=10;
    cout << *p1 << " " << *p2 << '\n' <<  a+b;
    return 0;
}