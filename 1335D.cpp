//
// Created by Mehul Arora on 19/01/21.
//
#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        for (int i=0; i<9;i++){
            string x;
            cin>>x;
            for (int i=0;i<9;i++){
                if (x[i]=='1'){
                    cout<<'2';
                }
                else{
                    cout<<x[i];
                } 
            }
            cout<<endl;
        }
    }
    return 0;
}