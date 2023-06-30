#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

bool checker(int n, int k, int x){
    if (k==1 && x==1){
        return false;
    }
    if (k==2 && x==1 && n%2==1){
        return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; int k; int x;
        cin >> n >> k >> x;
        bool youCan = checker(n, k, x);
        if (k==x){
            k--;
        }
        if (youCan){
            int counter = 0;
            vector <int> nums;
            cout << "YES" << endl;
            if (x!=1){
                counter=n;
                for(int i=0; i<n; i++){
                    nums.push_back(1);
                }
            }
            else{
                counter=n/2;
                for (int i=0; i<n/2-1; i++){
                    nums.push_back(2);
                }
                int last = n%2==0 ? 2 : 3;
                nums.push_back(last);
            }
            cout << counter << endl;
            for (auto nm: nums){
                cout << nm << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}