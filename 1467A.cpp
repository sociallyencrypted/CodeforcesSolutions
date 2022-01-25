#include <iostream>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for(int i = 0;i < n;i++) cout << (8+abs(i-1)) % 10;
        cout << endl;
    }
    return 0;
}