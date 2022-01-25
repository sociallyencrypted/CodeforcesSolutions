#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while (t--){
        ll n;
        cin >> n;
        char c;
        ll right=0;
        ll left=0;
        for ( int i = 0; i < n; ++i) {
            cin >> c;
            if (c=='0'){
                right++;
            }
            else{
                left++;
            }
        }
        string directions="ESWN";
        int r=(right-left);
        if (r<0) {
            r=4-((-r)%4);
            if (r==4){
                r=0;
            }
        }
        else{
            r%=4;
        }
        cout<<directions[r]<<endl;
    }
    return 0;
}