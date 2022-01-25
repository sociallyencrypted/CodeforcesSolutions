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
        int c;
        ll odd=0;
        ll even=0;
        for ( int i = 0; i < n; ++i) {
            cin >> c;
            if (c&1){
                odd++;
            }
            else{
                even++;
            }
        }
        if (n==even) {
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
        }
    }
    return 0;
}