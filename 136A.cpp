#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int n;
    cin >> n;
    vector <int> xyz (n+2);
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        xyz[i]=x;   
    }
    vector<int>::iterator it; 
 
    for (int i=1;i<=n;i++) {
        it = find (xyz.begin(), xyz.end(), i); 
        cout << it-xyz.begin()+1 << " ";  
    }
    return 0;
}