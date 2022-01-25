#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
string repStr(string x) {
    string y = (x+x).substr(1,(x+x).length());
    int r = y.find(x);
    if (r==-1) {
        return (x);
    }
    return (x.substr(0,r+1));
 
}
string LCM(string x, string y) {
    int lenx=x.length();
    int leny=y.length();
    string b="";
    int lcmn=lcm(lenx,leny);
    int repn=lcmn/(repStr(x).length());
    for (int i = 0; i < repn; i++){
      b += repStr(x);
    }
    return b;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a;
        cin >> b;
        string x=repStr(a);
        string z=repStr(b);
        if (x==z) {
            cout << LCM(a,b) << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}