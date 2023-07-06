#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
typedef long long ll;
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--) {
      int n; int k;
      cin >> n >> k;
      vector<int> differences;
      int last; cin >> last;
      for (int i=1; i<n; i++){
         int curr; cin >> curr;
         differences.push_back(abs(curr-last));
         last = curr;
      }
      if (k==n){
         cout << 0 << endl;
         continue;
      }
      sort(differences.rbegin(), differences.rend());
      int sum = 0;
      for (int i=k-1; i<differences.size(); i++){
         sum+=differences[i];
      }
      cout << sum << endl;
   }
}
 