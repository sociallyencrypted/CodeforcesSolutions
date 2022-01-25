#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n;
    cin >> n;
    int dp=1;
    string x;
    int res=0;
    cin >>x;
    char chk[2]={'A','A'};
    for (int i=0; i<n; i++) {
        if (x[i]=='U'||x[i]=='D') {
            if (chk[1]=='A') {
                //initialise
                chk[1]=x[i];
            }
            else if (chk[1]!=x[i]){
                chk[1]=x[i];
                dp+=1;
                chk[0]='A';
            }
        }
        else {
            if (chk[0]=='A') {
                //initialise
                chk[0]=x[i];
            }
            else if (chk[0]!=x[i]) {
                chk[0]=x[i];
                dp+=1;
                chk[1]='A';
            }
        }
    }
    cout<<dp;
    return 0;
}