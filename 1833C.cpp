#include <iostream>
#include <limits.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        // if all numbers are odd or even, great
        // if some are odd and some are even, problem
        // if there is one odd number smaller than all even numbers, great
        int oddMin = INT_MAX;
        int evenMin = INT_MAX;
        int oddNum = 0;
        int evenNum = 0;
        for (int i=0; i<n; i++){
            int x;
            cin >> x;
            if (x % 2 == 0){
                evenNum++;
                evenMin = x < evenMin ? x : evenMin;
            }
            else{
                oddNum++;
                oddMin = x < oddMin ? x : oddMin;
            }
        }
        if (evenNum == n || oddNum == n){
            cout << "YES" << endl;
        }
        else{
            if (oddMin<evenMin){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}