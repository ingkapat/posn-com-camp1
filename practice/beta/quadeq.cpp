#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if (B*B - 4*A*C < 0){
        printf("No Solution");
        return 0;
    }
    for (int a = 1;a <= A;a++){
        if (A%a == 0){
            int c = A/a;
            for (int b = -100;b <= 100;b++){
                if (b == 0){
                    if (B % a == 0){
                        int d = B/a;
                        if (C == b*d){
                            cout << a << " " << b << " " << c << " " << d;
                            return 0;
                        }
                    }
                    
                }
                else if (C%b == 0){
                    int d = C/b;
                    if (B == a*d + b*c){
                        cout << a << " " << b << " " << c << " " << d;
                        return 0;
                    }
                }

            }

        }
    }
    printf("No Solution");

    return 0;
}