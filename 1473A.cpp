#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>> t;
    while (t--) {
        int n;
        bool isYes=true;
        cin >> n;
        int d;
        cin >> d;
        int a[n+2];
        int min=INT_MAX, secondMin=INT_MAX;
        int minn=0;
        for (int i=0;i<n;i++) {
            int x;
            cin >> x;
            a[i]=x;
        }
        for (int j=0;j<n;j++) {
            if (a[j] < min) { 
                secondMin = min; 
                min = a[j]; 
                minn=j;
            } 
            else if ((a[j] < secondMin) && j!=minn) secondMin = a[j]; 
        }
        int sump=min+secondMin;
        for (int i=0;i<n;i++) {
            if (a[i]>d) {
                if (sump>d) {
                    isYes=false;
                    cout << "NO"<<endl;
                    break;
                }
                else {
                    a[i]=sump;
                }
            }
        }
    if (isYes == true) cout << "YES"<<endl;
    }
    return 0;
}