#include "bits/stdc++.h"
using namespace std;

int main() {
	double m, n, a;
	cin >> m >> n >> a;
	
	cout<<fixed;
	cout<< (long long int) (ceil((m/a))*ceil((n/a)));
}