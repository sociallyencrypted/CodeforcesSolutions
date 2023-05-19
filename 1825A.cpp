#include <iostream>

typedef long long ll;
using namespace std;


int main(){
    int t;
    cin >>t;
    while (t--){
        string a;
        cin >> a;
        char sample = a[0];
        bool isAllSame = true;
        for (char c: a){
            if (c!=sample){
                isAllSame = false;
                break;
            }
        }
        if (isAllSame){
            cout << -1 << endl;
            continue;
        }
        int len = a.length();
        cout << len-1 << endl;
    }
}