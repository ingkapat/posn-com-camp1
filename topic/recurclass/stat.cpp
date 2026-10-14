#include <bits/stdc++.h>
using namespace std;
int arr[110],n;

void stats(int &mi,int &ma,float &mean,float &med,int &mode){
    int mcount = -1;
    for (int i = 0;i < n;i++){
        int count = 0;
        mi = min(mi,arr[i]);
        ma = max(ma,arr[i]);
        mean+= arr[i];
        for (int j = i;j < n;j++){
            if (arr[j] == arr[i]) count++;
        }
        if (count > mcount){mcount = count;mode = arr[i];}
    }
    mean/=n;
    med = (mi+ma)/2;
} 


int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int mi = 1000,ma = -1000,mode=0;
    float mean = 0,med;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> arr[i];
    }
    stats(mi,ma,mean,med,mode);
    cout << "min = " << mi << "\nmax = " << ma << "\nmean = " << fixed << setprecision(2) << mean
    << "\nmedian = "<< fixed << setprecision(1) << med << "\nmode = " << mode;
    return 0;
}