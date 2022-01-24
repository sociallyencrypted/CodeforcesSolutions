#include "bits/stdc++.h"
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string S;
		cin >> S;
		if (S.length()>10) cout<< S[0] << to_string(S.length()-2) << S[S.length()-1]<< endl;
		else cout<<S<<endl;
	}
}