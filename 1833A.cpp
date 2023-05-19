#include <iostream>
#include <set>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string x;
        cin >> x;
        set<string> omg;
        for (int i=0; i<n-1; i++){
            omg.insert(x.substr(i,2));
        }
        cout << omg.size() << endl;
    }
}