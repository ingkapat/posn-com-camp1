#include <bits/stdc++.h>
using namespace std;

int main(){
    double r;
    scanf("%lf",&r);
    r = r*r;
    printf("%.6lf\n",acos(-1)*r);
    printf("%.6lf",2*r);
    return 0;
}