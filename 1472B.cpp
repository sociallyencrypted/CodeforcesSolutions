#include "bits/stdc++.h"
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <int> dp;
		for (int i=0;i<n;i++) {
			int x;
			cin >> x;
			dp[i]=x;
		 }
		vector <int> score(n+2,0);
		for (int i=0;i<n;i++) {
            int c = i;
			while (dp[i]<=n) {
				score[i]+=dp[c];
				c+=i;
			}
		}
		cout << *max_element(score.begin(), score.end())<<endl;	
	} 
}