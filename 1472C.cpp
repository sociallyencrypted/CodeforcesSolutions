#include "bits/stdc++.h"
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <int> dp(n);
		for (int i=1;i<=n;i++) {
			int x;
			cin >> x;
			dp.push_back(x);
			cout<<dp.back();
		 }
		
	} 
}