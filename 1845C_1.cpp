#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

bool solve_for_digit(string s, int pos, string l, string r, int digit){
    if (digit==l.length()){
        return false;
    }
    char candidate_l = l[digit];
    char candidate_r = r[digit];
    if (candidate_l == candidate_r){
        int pos_next = s.substr(pos).find_last_of(candidate_l);
        if (pos_next == string::npos){
            return true;
        }
        return solve_for_digit(s, pos_next+1, l, r, digit+1);
    }
    else{
        // iterate over all digits between candidate_l and candidate_r
        // find the one at the rightmost in s, and continue search
        int final_pos_chosen = 0;
        for (char c = candidate_l; c <= candidate_r; c++){
            int pos_next = s.substr(pos).find_last_of(c);
            if (pos_next == string::npos){
                return true;
            } 
            final_pos_chosen = max (final_pos_chosen, pos_next);
        }
        return solve_for_digit(s, final_pos_chosen+1, l, r, digit+1);
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        string s, l, r;
        int m;
        cin >> s >> m >> l >> r;
        string ans = solve_for_digit(s, 0, l, r, 0) ? "YES" : "NO";
        cout << ans << endl;
    }
}
