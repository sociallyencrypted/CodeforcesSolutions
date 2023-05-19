#include <iostream>
using namespace std;
#define INF 1e5

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m;
        cin >> m;
        int numMax1 = -INF;
        int numMax2 = -INF;
        int numMin1 = INF;
        int numMin2 = INF;
        for (int i=0; i<n*m; i++){
            int x; cin >> x;
            if (x>numMax1){
                numMax2 = numMax1;
                numMax1 = x;
            }
            else if (x>numMax2){
                numMax2 = x;
            }
            if (x<numMin1){
                numMin2 = numMin1;
                numMin1 = x;
            }
            else if (x<numMin2){
                numMin2 = x;
            }
        }
        int greater = max(numMax1-numMin2, numMax2-numMin1);
        int ans = greater + ((n*m-2)*(numMax1-numMin1));
        cout << ans << endl;
    }
}