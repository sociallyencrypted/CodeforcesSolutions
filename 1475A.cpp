//
// Created by Mehul Arora on 19/01/21.
//
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n==0) {
            cout<< "NO"<<endl;
        }
        else if (n&1){
            cout<<"YES"<<endl;
        }
        else if (isPowerOfTwo(n)){
            cout<<"NO"<<endl;
        }
        else {
            cout<< "YES"<<endl;      
        }
    }
    return 0;
}