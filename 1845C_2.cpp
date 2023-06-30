#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

bool solve_for_digit(vector<vector<int>> next, int pos, string l, string r, int digit){
    if (digit == l.length()){
        return false;
    }
    if (pos == -1 || pos >= next.size()){
        return true;
    }
    char candidate_l = l[digit];
    char candidate_r = r[digit];
    if (candidate_l == candidate_r){
        int pos_next = next[pos][int(candidate_l - '0')];
        if (pos_next == -1){
            return true;
        }
        return solve_for_digit(next, pos_next + 1, l, r, digit + 1);
    }
    else{
        int final_pos_chosen = 0;
        for (char c = candidate_l; c <= candidate_r; c++){
            int pos_next = next[pos][int(c - '0')];
            if (pos_next == -1){
                return true;
            }
            final_pos_chosen = max(final_pos_chosen, pos_next);
        }
        return solve_for_digit(next, final_pos_chosen + 1, l, r, digit + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s, l, r;
        int m;
        cin >> s >> m >> l >> r;

        vector<vector<int>> next(s.length(), vector<int>(10, -1));
        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = 0; j < 10; j++) {
                if (int(s[i] - '0') == j) {
                    next[i][j] = i;
                }
                else {
                    if (i == s.length() - 1) continue;
                    next[i][j] = next[i + 1][j];
                }
            }
        }

        string ans = solve_for_digit(next, 0, l, r, 0) ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}

